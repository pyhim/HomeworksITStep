//
// Created by dgalytskyi on 10/5/24.
//

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <list>
#include <unordered_map>

#include "Car.h"

using namespace std;

namespace Autosalon {

class UserInterface {
    using compareMethodPtr = bool (*)(const Car&, const Car&);
// Fields {
    unordered_map<char, compareMethodPtr> comparingFunctions;
    list<Car> cars;
    void (UserInterface::*currentMenu)();
// Fields }
// Methods {
    void mainMenu();

    void addMenu();

    void removeMenu();

    void show() const;

    void sortMenu();

    void searchMenu();
// Methods }
public:
    UserInterface();

    UserInterface(const UserInterface &other) = delete;

    const UserInterface& operator=(const UserInterface& other) = delete;

    UserInterface& operator=(const UserInterface&& other) = delete;

    void run();
};

} // Autosalon

#endif //USERINTERFACE_H
