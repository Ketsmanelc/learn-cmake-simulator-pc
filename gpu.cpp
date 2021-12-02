#include "gpu.h"
#include "iostream"

void print (int *buffer)
{
    for (int i = 0; i < 8; i++)
    {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;
}
