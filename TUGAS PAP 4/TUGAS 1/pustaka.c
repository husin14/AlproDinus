#include "pustaka.h"
void cetak_array(int data[], int jml_data){
   int a;
    for(a=0; a<jml_data; a++){
        printf(" %d ",data[a]);
    }
 }
 void compres_array(int data[], int jml_data){
    int a,temp;
        for (a=0; a<jml_data; a++)
            {
            if(data[a]== 0)
                {
                    temp = data [a];
                    data[a] = data[a+1];
                    data[a+1] = temp;
                }
                printf(" ");
            }
        for(a=0; a< jml_data; a++){
            if(data[a] != 0){
                printf("%d ",data[a]);
            }
        }

 }
 nama(){
    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("klompok : A11.4202\n");

    puts("");
 }

