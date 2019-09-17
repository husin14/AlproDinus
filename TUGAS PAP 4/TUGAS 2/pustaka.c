#include "pustaka.h"
void cetak (int data[], int jml_data){
    int a;
        for(a=0; a<jml_data; a++){
            printf(" %d ", data[a]);
        }


}
void selection_short(int data[], int jml_data){
int a,b, c,idx,temp;

    for(a= 0; a<jml_data; a++)
        {
            idx = a;
        for(b= a; b<jml_data; b++)
        {
            if(data[b] < data[idx])
                {
                    idx = b;
                }
        }
        temp = data[idx];
        data[idx] = data[a];
        data[a]  = temp;
          for(c=0; c < 5; c++)
              {
                printf(" %d ",data[c]);
              }
        puts("");
    }

}



nama(){

    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("Klompok : A11.4202\n");
puts("");
}
