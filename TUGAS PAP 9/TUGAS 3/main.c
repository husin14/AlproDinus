#include "header.h"
//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP = A11.4202

int main()
{
     int batas;
        int *arr;
        arr = malloc(sizeof(*arr));
        printf("masukan batas angka : "); scanf("%d",&batas);
        arr_data(arr,batas);
    return 0;
}
