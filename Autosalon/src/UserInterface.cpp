//
// Created by dgalytskyi on 10/5/24.
//

#include <algorithm>
#include <iostream>

#include "../headers/UserInterface.h"

namespace Autosalon {
    bool compareByName(const Car& a, const Car& b) {
        return a.getName() > b.getName();
    }

    bool compareByPrice(const Car& a, const Car& b) {
        return a.getPrice() > b.getPrice();
    }

    bool compareByVolume(const Car& a, const Car& b) {
        return a.getVolume() > b.getVolume();
    }

    bool compareByYear(const Car& a, const Car& b) {
        return a.getYear() > b.getYear();
    }

    void printCar(const Car& car) {
        cout << car.getName()
        << " Price: " << car.getPrice()
        << " Volume: " << car.getVolume()
        << " Year: " << car.getYear() << "\n";
    }

    UserInterface::UserInterface() : currentMenu(&UserInterface::run) {
        this->comparingFunctions.emplace('n', compareByName);
        this->comparingFunctions.emplace('p', compareByPrice);
        this->comparingFunctions.emplace('v', compareByVolume);
        this->comparingFunctions.emplace('y', compareByYear);

        this->cars.emplace_front("Audi", 14050.5, 2018, 3.3);
        this->cars.emplace_front("Volvo", 29050.5, 2016, 3.6);
        this->cars.emplace_front("Renault", 19550.5, 2014, 3.5);
        this->cars.emplace_front("Nissan", 15035.0, 2019, 3.1);
    }

    void UserInterface::mainMenu() {
        int choice;

        cout << "\n1. Add a Car\n"
             << "2. Remove a Car\n"
             << "3. Show All Cars\n"
             << "4. Sort Cars\n"
             << "5. Search\n"
             << "6. Exit\n"
             << ": ";
        cin >> choice;

        switch (choice) {
            case 1:
                this->currentMenu = &UserInterface::addMenu;
                break;
            case 2:
                this->currentMenu = &UserInterface::removeMenu;
                break;
            case 3:
                this->show();
                break;
            case 4:
                this->currentMenu = &UserInterface::sortMenu;
                break;
            case 5:
                this->currentMenu = &UserInterface::searchMenu;
                break;
            case 6:
                this->currentMenu = nullptr;
                break;
            default:
                cerr << "Invalid choice\n";
                break;
        }
    }

    void UserInterface::addMenu() {
        string name;
        double price, volume;
        int year;

        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the price: ";
        cin >> price;
        cout << "Enter the volume: ";
        cin >> volume;
        cout << "Enter the year: ";
        cin >> year;

        Car newCar(name, price, year, volume);
        this->cars.emplace_front(newCar);

        this->show();
        this->currentMenu = &UserInterface::mainMenu;
    }

    void UserInterface::removeMenu() {
        size_t chosenCar;

        this->show();
        cout << "Enter the number of the deleting car: ";
        cin >> chosenCar;

        auto it = this->cars.begin();
        chosenCar -= 1;
        for (size_t i = 0; i < chosenCar && it != this->cars.end(); i++) {
            ++it;
        }
        this->cars.erase(it);

        this->show();
        this->currentMenu = &UserInterface::mainMenu;
    }

    void UserInterface::show() const {
        int i = 1;

        cout << '\n';
        for (const Car& car : this->cars) {
            cout << i << ". ";
            printCar(car);

            i++;
        }

        cout.flush();
    }

    void UserInterface::sortMenu() {
        char criteria, direction;

        cout << "Enter the sorting criteria ([n]ame/[p]rice/[v]olume/[y]ear): ";
        cin >> criteria;
        cout << "Enter the sorting direction ([a]scending/[d]escending): ";
        cin >> direction;

        const auto comparingFunction = this->comparingFunctions.find(criteria)->second;
        switch (direction) {
            case 'a':
                this->cars.sort(comparingFunction);
                break;
            case 'd':
                this->cars.sort([comparingFunction](const Car& a, const Car& b) {
                    return !comparingFunction(a, b);
                });
                break;
            default:
                cerr << "Invalid sorting direction\n";
        }

        this->show();
        this->currentMenu = &UserInterface::mainMenu;
    }

    void UserInterface::searchMenu() {
        string query;
        int queryInt = 0;
        double queryDouble = 0;

        cout << "Enter the search query: ";
        cin >> query;

        if (typeid(query).name() != typeid(string).name() &&
            (typeid(query).name() != typeid(int).name() || typeid(query).name() != typeid(double).name())
            ) {
            queryInt = stoi(query);
            queryDouble = stod(query);
        }

        const auto result = ranges::find_if(this->cars, [&](const Car& car) {
            return query == car.getName() || queryInt == car.getYear() ||
                queryDouble == car.getVolume() || queryDouble == car.getPrice();
        });

        if (result == this->cars.end()) {
            cerr << "Nothing has been found\n";
            system("sleep 1");
        } else {
            cout << "Found: ";
            printCar(*result);
        }

        this->currentMenu = &UserInterface::mainMenu;
    }

    void UserInterface::run() {
        cout << "Welcome to Autosalon!" << '\n';
        this->currentMenu = &UserInterface::mainMenu;

        while (this->currentMenu != nullptr) {
            (this->*currentMenu)();
        }

        cout << "Bye!" << endl;
    }
} // Autosalon