#include "pustaka.h"

int main()
{
 nama ();
    puts("program cek urutan angka ");
    int angka1[5]={3, 5, 38, 44, 47 };
        printf("maka jumlah [3, 5, 38, 44, 47] adalah = ");
        cek(cek_urut(angka1,5));
        puts("");
    int angka2[5]={3, 44, 38, 5, 47 };
        printf("maka jumlah [3, 44, 38, 5, 47] adalah = ");
        cek(cek_urut(angka2,5));
        puts("");
    int angka3[5]={2, 15, 26, 27, 36 };
        printf("maka jumlah [2, 15, 26, 27, 36] adalah = ");
        cek(cek_urut(angka3,5));
        puts("");
    int angka4[5]={15, 36, 27, 2, 26 };
        printf("maka jumlah [15, 36, 27, 2, 26] adalah = ");
        cek(cek_urut(angka4,5));
        puts("");
    return 0;
}
