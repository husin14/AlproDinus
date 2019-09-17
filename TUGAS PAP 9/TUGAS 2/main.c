#include "header.h"

//NAMA = HUSIN SUFI
//NIM = A11.2018.10909
//KELP = A11.4202

int main()
{
    int a,b,X;
    printf("masukkan nilai A = "); scanf("%d",&a);
    printf("masukkan nilai B = "); scanf("%d",&b);

    ChangeValue(&X,a,b);
    printf("Change Value = %d",X);
        return 0;
}
