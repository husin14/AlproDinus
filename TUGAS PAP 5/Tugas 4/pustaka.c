#include "pustaka.h"
void sequential_search(int arr[], int n)
{
    int i,max=arr[0],min=arr[0],hitung;
    for(i=0; i<n; i++)
    {
        if(max <arr[i]) ///mencari nilai max
        {

            max=arr[i];
        }
        else if (min > arr[i])///nilai min
        {
            min=arr[i];
        }
    }

        hitung = max - min ;
        printf("maka nilai GAP nya adalah = %d",hitung);

}

nama(){
    printf("Nama : Husin Sufi\n");
    printf("Nim  : A11.2018.10909\n");
    printf("klompok : A11.4202\n");

    puts("");
 }


