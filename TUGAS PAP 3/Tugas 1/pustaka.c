#include "pustaka.h"

int count_array(int data[], int jml_data)
{
    int i, jml=0;
    for(i=0;i<jml_data;i++)
    {
        if(data[i]!=0)
        {
            jml++;
        }
    }

    return jml;
}


void nama ()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM = A11.2018.10909\n");
    printf("KELP = A11.4202");
    printf("\n====================JAWAB=========================\n");
}
