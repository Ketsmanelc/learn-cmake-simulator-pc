#include "disk.h"
#include <iostream>
#include <fstream>

void save (int *buffer)
{
    std::ofstream file("data.txt");
    for (int i = 0; i < 8; i++)
    {
        file << buffer[i] << std::endl;
    }
    file.close();
}

void load (int *buffer)
{
    std::ifstream file("data.txt");
    for (int i = 0; i < 8; i++)
    {
        file >> buffer[i];
    }
    file.close();
}