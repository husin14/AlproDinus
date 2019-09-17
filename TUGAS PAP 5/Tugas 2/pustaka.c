#include "pustaka.h"

int is_inverse(int list1[], int list2[], int jml_data)
{
    int a, b;
    for(a=0;a<jml_data;a++)
    {
        for(b=jml_data-1;b>=0;b--)
        {
            if(list1[a]==list2[b])
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}

nama(){
    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("klompok : A11.4202\n");

    puts("");
 }


