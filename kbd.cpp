#include "kbd.h"
#include <iostream>

void UserInput(int *buffer)
{
    for(int i = 0; i < 8; i++){
        std::cin >> buffer[i];
    }
}

