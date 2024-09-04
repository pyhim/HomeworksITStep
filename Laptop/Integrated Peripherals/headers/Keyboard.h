//
// Created by dgalytskyi on 9/2/24.
//

#ifndef KEYBOARD_H
#define KEYBOARD_H

namespace Laptop {
    class Keyboard {
    private:
        char keys[6];

    public:
        Keyboard();

        void input(char key);

        char* getKeys();
    };
} // Laptop

#endif //KEYBOARD_H
