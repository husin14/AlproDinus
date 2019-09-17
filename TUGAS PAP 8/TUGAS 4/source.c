#include "header.h"
void cetak_array (int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("angka ke %d = ",i); scanf("%d",&arr[i]);
    }
}

void cetak_angka(int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf(" [%d] ",arr[i]);
    }
}

int max(int angka1, int angka2)
{
    if(angka1 > angka2)
    {
        return angka1;
    }
    else
    {
        return angka2;
    }
}

int rec_mac(int data[], int cur, int arrsize)
{
    if(arrsize == cur)
    {              //0
        return data[cur];
    }
    else
    {              //batas                0   batas-1 (3-1)
        return max(data[arrsize],rec_mac(data,cur,arrsize-1));

    }
}

