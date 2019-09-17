#include "header.h"

void input(int arr[], int batas)
{

    int a;
    for(a=0; a<batas; a++)
        {
            printf("Masukan angka ke - %d:  ",a+1);
            scanf("%d",&arr[a]);
        }

}
void arr_data(int *arr_data, int batas)
{
   int a;
   for(a = 0; a<batas; a++)
      {
        if(a == batas)
        {
            printf(" [%d]" ,arr_data[a]);
        }
        else{
            printf("- [%d] ",arr_data[a]);
        }
      }
}

