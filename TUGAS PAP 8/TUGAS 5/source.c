#include "header.h"
int isiarray (int arr[], int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Masukkan data ke-%d = ",i); scanf("%d",&arr[i]);
    }
}

void cetak(int data[], int cur, int jml_data)
{
    if(jml_data == cur)
    {
        printf(" [%d] ",data[cur]);
    }
    else {
        cetak(data,cur,jml_data-1);
        printf(" [%d] ",data[jml_data]);

    }

}
