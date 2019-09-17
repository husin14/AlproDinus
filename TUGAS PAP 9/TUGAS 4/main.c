#include "header.h"
//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP = A11.4202
int main()
{
    int batas;
    printf("Masukan batas angka : "); scanf("%d",&batas);
        int arr[batas];
        puts("\n=>Menginput angka ");
        input(arr,batas);
        puts("\n=>Cetak angka");
        arr_data(&arr,batas);
    return 0;
}
