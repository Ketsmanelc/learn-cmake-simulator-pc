#include <iostream>
#include "cpu.h"
#include "ram.h"
#include "gpu.h"
#include "disk.h"
#include "kbd.h"
int main() {
    int buffer[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int array[8] = {0, 1, 2, 3, 4, 5, 6, 7};

    std::string cmd;
    while (true){
        std::cin >> cmd;
        if (cmd == "sum") compute(buffer);
        else if (cmd == "save") save(buffer);
        else if (cmd == "load") load(buffer);
        else if (cmd == "input") UserInput(buffer);
        else if (cmd == "display") print(buffer);
        else if (cmd == "exit") return 0;
        else std::cerr << "Invalid command!";
    }




    return 0;
}
