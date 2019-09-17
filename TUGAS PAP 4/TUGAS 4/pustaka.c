#include "pustaka.h"

void cetak_angka(int data[], int jml_data){
    int a;
        a=0;
        while(a<jml_data)
        {
            printf(" %d ",data[a]);
           a++;
        }

}
void short_selection(int data[], int jml_data){
    int a, b;
    int temp, index;
        for(a=0; a<jml_data; a++)
        {
          index = a;
            for(b=a; b<jml_data-1; b++)
            {

               if(data[b] < data[index])
                {
                    index = b;
                }
            }

            /// swap
            temp = data[index];
            data [index] = data[a];
            data[a] = temp;

         }
         for(a=0; a<jml_data; a++){
            printf(" %d ",data[a]);
         }

}

int get_median(int data[], int jml_data){
    int hasil,median,a;
        if(jml_data%2 == 0)
            {
            median = (data[(jml_data/2)] + data[(jml_data/2)-1]) /2;
            }
        else
            {
            median = data[(jml_data/2)];
            }


return median;
}
nama(){
    printf("Nama : Husin Sufi \n");
    printf("Nim  : A11.2018.10909\n");
    printf("Klompok : A11.4202\n");


}
