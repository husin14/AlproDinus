#include "pustaka.h"

void buble_short(int data[], int jml_data){
int a, b,c;
int jum=0;
int temp;

    for(a=jml_data-1; a>0; a--)
        {
        for(b=0; b<a-1; b++){
            if(data[b] > data[b+1])
          {
             temp     = data[b];
             data[b]  = data[b+1];
             data[b+1]= temp;

             puts("");
             if(data[b+1] > data[b] )
                {
                for(c=0; c<5; c++){
                printf(" %d .",data[c]);
                }
               printf("\n");
             }
          }
        }
    }

}

void nama ()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM = A11.2018.10909\n");
    printf("KELP = A11.4202");
    printf("\n====================JAWAB=========================\n");
}
