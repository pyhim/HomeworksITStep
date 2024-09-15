//
// Created by dgalytskyi on 9/11/24.
//

#ifndef CLIENT_H
#define CLIENT_H

#include "../continents/headers/Africa.h"
#include "../continents/headers/NorthAmerica.h"

#include <functional>

namespace AnimalWorld {
    class Client final {
        NorthAmerica northAmerica;
        Africa africa;
        void (Client::*nextMenu)();
        Continent& currentContinent;

        void mainMenu();

        void continentMenu();

        void end();

    public:
        Client();

        void start();
    };
} // AnimalWorld

#endif //CLIENT_H
