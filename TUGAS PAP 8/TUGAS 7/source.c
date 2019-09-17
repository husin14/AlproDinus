#include "header.h"

void isidata (int arr[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Data yang ke-%d = ",i); scanf("%d",&arr[i]);
    }
}
void printdata (int arr[],int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("[%d] ,",arr[i]);
    }
}

void rec_selection_sort(int data[], int arrSize)
    {
        int a,temp,index ;
        if (arrSize==1)
            {
                index = arrSize-1;

                for (a=arrSize-2 ; a>=0 ; a--)
                    {
                        if (data[a] > data[index])
                            {
                                index = a ;
                            }
                    }

                temp = data[index];
                data[index] = data[arrSize-1];
                data[arrSize-1] = temp ;
            }
        else
            {
                index = arrSize-1;


                for (a=arrSize-2 ; a>=0 ; a--)
                    {
                        if (data[a] > data[index])
                            {
                                index = a ;
                            }
                    }

                temp = data[index];
                data[index] = data[arrSize-1];
                data[arrSize-1] = temp ;

                rec_selection_sort(data,arrSize-1);
            }
    }

