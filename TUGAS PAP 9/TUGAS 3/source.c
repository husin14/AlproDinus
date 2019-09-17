#include "header.h"

void arr_data(int *data, int batas)
{
    int i;
    for (i=0; i<batas; i++)

    {
       data[i]= i+1;
        printf("[%d], ",data[i]);
    }
}
