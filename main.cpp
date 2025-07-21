#include <iostream>
#include "VideoGame.h"

int main() {
    VideoGame game1("Escape From Tarkov", "FPS", "PC");
    VideoGame game2("Subnautica", "Survival", "Multiplatform");

    std::cout << game1 << std::endl;
    std::cout << game2 << std::endl;

    if (game1 == game2) {
        std::cout << "The games are the same." << std::endl;
    }
    else {
        std::cout << "The games are different." << std::endl;
    }

    return 0;
}