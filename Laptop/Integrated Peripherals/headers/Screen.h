//
// Created by dgalytskyi on 9/2/24.
//

#ifndef SCREEN_H
#define SCREEN_H

namespace Laptop {
    class Screen {
    private:
        int width;
        int height;

    public:
        Screen(int width, int height);

        [[nodiscard]] int getWidth() const;

        [[nodiscard]] int getHeight() const;
    };
} // Laptop

#endif //SCREEN_H
