#include "header.h"

//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP = A11.4202

int main()
{
    int batas;
    float avg;
    int arr[100];


     printf("Masukan batas angka : "); scanf("%d",&batas);
        puts("\n=>input angka");
        input(arr,batas);

        puts("\n=>Nilai rata-rata ");
        rata_rata(&avg,arr,batas);
        printf("Maka rata_ratanya adalah : %.2f\n",avg);
    return 0;
}
