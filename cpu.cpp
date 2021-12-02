#include "cpu.h"
#include "iostream"
void compute (int *ptr)
{
    long int total = 0;
    for (int i = 0; i < 8; i++)
    {
        total += ptr[i];
    }
    std::cout << total << std::endl;
}
