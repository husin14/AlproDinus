#include "header.h"
void input(int arr[], int batas)
{
    int a;
    for(a = 0; a<batas; a++)
    {
        printf("Masukan angka ke -%d : ",a+1);
        scanf("%d",&arr[a]);
    }

}
void rata_rata(float *avg, int *arr_data, int batas)
{
    int a;
    int rata = 0;
        for(a=0; a<batas; a++)
        {
            rata = rata + arr_data[a];
        }
        *avg = rata/batas;

}
