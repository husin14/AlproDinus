#include "header.h"

//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP =  A11.4202

int main()
{
    int jumlahdata;
    printf("Masukkan banyak data = "); scanf("%d",&jumlahdata);
    int arr4[jumlahdata];
    puts("");
    isidata(arr4,jumlahdata);
    puts("");
    printf("Sebelum Di Sorting\n");
    printdata(arr4,jumlahdata);
    puts("");
    printf("Setelah Di Sorting Rec\n");
    rec_selection_sort(arr4,jumlahdata);
    printdata(arr4,jumlahdata);

    return 0;
}
