#include "pustaka.h"

void bubble_sort(int data[], int jml_data)
{
    int a,b,temp;
    for(a=0;a<jml_data-1;a++)
    {
        for(b=0;b<jml_data-a-1;b++)
        {
            if(data[b]>data[b+1])
            {
                temp=data[b];
                data[b]=data[b+1];
                data[b+1]=temp;
            }
        }
        puts("");
        cetak(data,jml_data);
    }
}

void cetak(int data[], int jml_data)
{
    int a;
    for(a=0;a<jml_data;a++)
    {
        printf("%d  ",data[a]);
    }
}

void nama ()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM = A11.2018.10909\n");
    printf("KELP = A11.4202");
    printf("\n====================JAWAB=========================\n");
}
