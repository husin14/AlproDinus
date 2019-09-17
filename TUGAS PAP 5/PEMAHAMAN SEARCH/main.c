#include "pustaka.h"

int main()
{
    int bates;
    printf("Masukkan banyak karakter yang ingin di isi ? = "); scanf("%d",&bates);
    char data[bates];


    input(bates);

    char cari;
    fflush(stdin);
    printf("karakter apa yang ingin anda cari ?? = "); scanf(" %c",&cari);



    printf("krakter ditemukan pada indeks ke %d",mencari(input,bates,cari));

    return 0;
}
