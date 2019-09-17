#include "pustaka.h"

int binnary_search (int array[] , int size , int cari)
{
    int i,left,right,midle;

    left=0;
    right=size-1;
    midle= (left+right) / 2;

    while (left <= right)
    {
        midle =  (left +right) / 2;
        if (array[midle] == cari)
        {
            return midle;
        }
        else if (array[midle] < cari)
        {
            left=midle+1;
        }
        else
        {
            right=midle-1;
        }
    }
    return -1;
}
