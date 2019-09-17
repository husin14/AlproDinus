#include "header.h"

int binary_searchh (int cari, int arr[],int batas)
{
    int left,right,middle;

    left=0;
    right=batas - 1;

    while (left <= right)
    {
        middle=(left + right ) /2;

        if (cari < arr[middle])
        {
            right= middle-1;
        }
        else if (cari > arr[middle])
        {
            left = middle + 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void nama()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM= A11.2018.10909\n");
    printf("Kelp=A11.4202\n");
}
