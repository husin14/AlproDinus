#include "pustaka.h"

void input (int n)
{
    int i;
    char x[n];
    for (i=0; i<n; i++)
    {
        printf("data ke %d = ",i); scanf("%s",&x[i]);
    }
}

int  mencari (char arr[],int wates, int golek)
{
    int i,idx;
    for (i=0; i<wates; i++)
    {
        if (arr[i] == golek)
        {
            idx=i;
            printf("TRUE"); puts("");
            fflush(stdin);
            return i;
        }
    }
        return -1;
}
