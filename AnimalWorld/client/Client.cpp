//
// Created by dgalytskyi on 9/11/24.
//

#include <iostream>

#include "Client.h"

using namespace std;

namespace AnimalWorld {
    void Client::mainMenu() {
        int continent;

        while (true) {
            cout << "Choose the continent (1. North America. 2. Africa)\n: ";
            cin >> continent;

            switch (continent) {
                case 1:
                    this->currentContinent = this->northAmerica;
                    break;
                case 2:
                    this->currentContinent = this->africa;
                    break;
                default:
                    cerr << "Invalid choice!\n";
                    continue;
            }

            break;
        }

        this->nextMenu = &Client::continentMenu;
    }

    void Client::continentMenu() {
        int action;

        this->currentContinent.printCarnivores();
        this->currentContinent.printHerbivores();

        while (true) {
            cout << "Satiate: 1. Herbivores. 2. Carnivores\n: ";
            cin >> action;

            switch (action) {
                case 1:
                    this->currentContinent.herbivoresSatiate();
                    break;
                case 2:
                    this->currentContinent.carnivoresSatiate();
                    break;
                default:
                    cerr << "Invalid choice!\n";
                    continue;
            }

            break;
        }

        cout << "Results: \n";
        this->currentContinent.printCarnivores();
        this->currentContinent.printHerbivores();

        while (true) {
            cout << "Choose action (1. Satiate again. 2. Main Menu. 3. Quit)\n: ";
            cin >> action;

            switch (action) {
                case 1:
                    this->nextMenu = &Client::continentMenu;
                    break;
                case 2:
                    this->nextMenu = &Client::mainMenu;
                    break;
                case 3:
                    this->nextMenu = nullptr;
                    break;
                default:
                    cerr << "Invalid choice!\n";
                    continue;
            }

            break;
        }
    }

    Client::Client() : nextMenu(&Client::mainMenu), currentContinent(this->northAmerica) {
        for (int i = 0; i < 5; ++i) {
            this->northAmerica.createCarnivore(ECarnivore::Wolf, 110);
            this->northAmerica.createHerbivore(EHerbivore::Wildebeest, 70);

            this->africa.createCarnivore(ECarnivore::Lion, 100);
            this->africa.createHerbivore(EHerbivore::Bison, 95);
        }

        for (int i = 0; i < 2; ++i) {
            this->northAmerica.createHerbivore(EHerbivore::Wildebeest, 115);
            this->africa.createHerbivore(EHerbivore::Bison, 120);
        }
    }

    void Client::start() {
        cout << "\nWelcome to AnimalWorld!\n\n";

        do {
            (this->*nextMenu)();
        } while (this->nextMenu != nullptr);

        cout << "Bye!" << endl;
    }
} // AnimalWorld
