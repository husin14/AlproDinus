#include "pustaka.h"

///nama = Husin Sufi
///nim = A11.2018.10909
///kelp = A11.4202

void print_nama (char nama[100])
{
    printf("namanya adalah = %s\n",nama);
}

int  panjang_text(char text[])
{
  hasil1=0+strlen("Laki-laki");
  hasil2=0+strlen("ada apa sih");
  hasil3=0+strlen("ada ini di situ");
  hasil4=0+strlen("Anak kos makan mie");
}

int max(int array[], int n){
    int awal,p;
    int besar = array[0];
     for(awal=0; awal<n; awal++)
    {
        if (besar < array[awal])
        {
            besar=array[awal];
        }
        else
        {
            besar=besar;
        }
    }

return besar;
}
