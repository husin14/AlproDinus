#include "pustaka.h"

int at_least(char huruf, int jml, char teks[])
{
    int y;
    int temp=0;

    for(y=0;y<strlen(teks);y++)
    {
        if(teks[y]==huruf)
        {
            temp++;
        }
    }
    if(temp<jml)
    {
        return false;
    }
    else
    {
        return true;
    }
}

nama(){
    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("klompok : A11.4202\n");

    puts("");
 }
