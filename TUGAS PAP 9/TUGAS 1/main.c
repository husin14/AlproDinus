#include "header.h"

//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP = A11.4202

int main()
{
    int x,y;
    printf("Masukkan nilai A = "); scanf("%d",&x);
    printf("Masukkan nilai B = "); scanf("%d",&y);

    tuker(&x,&y);
    puts("Setelah swapping pointer");
    printf("Nilai A = %d ",x);
    puts("");
    printf("Nilai B = %d ",y);

    return 0;
}
