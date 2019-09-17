#include "header.h"
//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP =  A11.4202

int main()
{
    int jumlahdata;
    printf("berapa banyak data yang ingin di isi?? = "); scanf("%d",&jumlahdata);
    int arr3[jumlahdata];
    puts("");
    isi_data(arr3,jumlahdata);
    puts("");
    cetak(arr3,0,jumlahdata-1);
    puts("");
    float hasil;
    hasil= nilaitotal(arr3,0,jumlahdata-1);
    puts("");
    printf("total = %.2f",hasil);
    puts("");
    float mean;
     mean = hasil/jumlahdata;
    printf("nilai rata rata nya = %.2f",mean);

    return 0;
}
