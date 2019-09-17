#include "header.h"
///NAMA = HUSIN SUFI
///NIM  = A11.2018.10909
///KELP = A11.4202
int main()
{
     int banyak_array;
    printf("masukkan banyak array = "); scanf("%d",&banyak_array);
    int arr1[banyak_array];
    puts("");
    cetak_array(arr1,banyak_array);
    puts("");
    cetak_angka(arr1,banyak_array);
    int hasil = rec_mac(arr1,0,banyak_array-1);
    puts("\n==========");
    printf("Maka Yang Terbesar = %d \n",hasil);
    puts("=============\n");
    return 0;
}
