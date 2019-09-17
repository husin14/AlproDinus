#include "pustaka.h"

void nama(){
printf("Nama : Husin Sufi\n");
printf("Nim  : A11.2018.10909\n");
printf("Kel  : A11.4202\n\n");

}

int cek_prima (int num1)
{
    int x,cek=0;

    for (x=1; x<= num1; x++)
    {
        if (num1 %x==0)
        {
            cek++;
        }
    }

    if (cek==2)
    {
        return printf("cek_prima = %d ==> TRUE \n",num1);
    }
    else
    {
        return printf("cek_prima = %d ==> FALSE \n",num1);
    }
}
