#include "header.h"

///NAMA = HUSIN SUFI
///NIM = A11.2018.10909
///KELP=A11.4202
int main()
{
    int data1[]={2,5,7,9,12,16,NULL};
    int data2[]={3,5,6,8,1,8,NULL};

    printf("Sum Transversal (data1,0) = %d",sum_transversal(data1,0));
    puts("");
    printf("Sum Transversal (data2,0) = %d",sum_transversal(data2,0));
    return 0;
}
