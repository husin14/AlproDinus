#include "pustaka.h"

int cek_urut(int data[],int jml_data){
   int a;
   int hasil;
   for (a=0; a < jml_data; a++){
     if((a+1) < jml_data){
        if(data[a] < data[a+1]){
            hasil=1;
        }
        else{
            hasil=0;
            break;
        }
     }
   }
 return hasil;
    }

 int cek(int p){
  if(p == 1){
    printf("True");
  }
  else{
    printf("False");
  }


 }


 void nama ()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM = A11.2018.10909\n");
    printf("KELP = A11.4202");
    printf("\n====================JAWAB=========================\n");
}
