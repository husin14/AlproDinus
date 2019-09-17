#include "header.h"

///NAMA = HUSIN SUFI
///NIM = A11.2018.10909
///KELP = A11.4202

int main()
{
    int banyakdata;
    printf("isi banyak data = "); scanf("%d",&banyakdata);
    int arr2[banyakdata];
    puts("");
    isiarray(arr2,banyakdata);
    puts("");
    cetak(arr2,0,banyakdata-1);
    return 0;
}
