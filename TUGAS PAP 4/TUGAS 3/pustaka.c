#include "pustaka.h"

void cetak_array(int  data[], int jml_data){
    int a;
    for(a=0; a< jml_data; a++){
        printf(" %d ", data[a]);
    }

}
void selection_short(int  data[], int jml_data){
    int a,b,c,temp,index;

        for(a=0; a<jml_data; a++)
        {
            index = a;
            for(b=a; b<jml_data; b++)
            {
                if(data[b] < data[index])
                {
                   index = b;
                }
            }
            ///swap
            temp = data[index];
            data[index] = data[a];
            data[a] = temp;
            if(data[index] > data[a] )
              {
                for(c=0; c<5; c++)
                    {
                    printf(" %d ",data[c]);
                    }
                    printf("\n");
              }

    }
}

nama(){
    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("Klompok : A11.4202\n");

}
