#include "pustaka.h"

void sequential_search(int array[], int size, int cari)
{
    int i;
    for(i=0; i<size; i++)
    {
        if(array[i]==cari)
        {
             printf("true");

             break;

        }
    }

    if (i==size)
        {
            printf("false");

        }

}
