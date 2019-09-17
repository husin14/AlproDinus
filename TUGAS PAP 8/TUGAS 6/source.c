#include "header.h"

void isi_data (int arr[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("isi data ke-%d = ",i); scanf("%d",&arr[i]);
    }
}

void cetak (int arr[], int cur,int n)
{
    if (n == cur)
    {
        printf(" [%d], ",arr[cur]);
    }
    else
    {
        cetak(arr,cur,n-1);
        printf("[%d], ",arr[n]);
    }
}

int nilaitotal (int arr[],int cur,int n)
{
    if (n == cur)
    {
        return arr[cur];
    }
    else
    {
        return arr[n] + nilaitotal(arr,cur,n-1);
    }
}
