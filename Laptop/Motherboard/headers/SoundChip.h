//
// Created by dgalytskyi on 9/2/24.
//

#ifndef SOUNDCHIP_H
#define SOUNDCHIP_H
#include <string>

using std::string;

namespace Laptop {
    class SoundChip {
    private:
        string modelName;
    public:
        explicit SoundChip(string modelName);

        void playSound(const string &sound) const;
    };
} // Laptop

#endif //SOUNDCHIP_H
