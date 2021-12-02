#include "ram.h"


void write (int *ram_buffer,const int *wr_buffer)
{
    for (int i = 0; i < 8; i++)
    {
        ram_buffer[i] = wr_buffer[i];
    }
}

int read(const int *ram_buffer)
{
    return *ram_buffer;
}