#include <stdio.h>
#include <stdlib.h>
#include "pustaka.h"

///nama = Husin Sufi
///nim = A11.2018.10909
///kelp = A11.4202

int main()
{
    print_nama("Anton Suryanto");
    print_nama("Muhammad Khamdan");
    print_nama("Habibah Sarawati");
    print_nama("Lathifatun Nikmah");

     puts("");

   panjang_text("");
    printf("laki-laki           : %d\n",hasil1);
    printf("ada apa sih         : %d\n",hasil2);
    printf("ada ini di situ     : %d\n",hasil3);
    printf("anak  kos makan mie : %d\n",hasil4);
    puts("");


    int array1[]={4, 5, 6, 7, 8};
    printf("Bilangan terbesar dari array1 adalah = %d \n",max(array1,5));
    int array2[]={8, 7, 6, 5, 4};
    printf("Bilangan terbesar dari array2 adalah = %d \n",max(array2,5));
    int array3[]={7, 5, 8, 6, 4};
    printf("Bilangan terbesar dari array3 adalah = %d \n",max(array3,5));
    int array4[]={67, 23, 55, 87, 12, 40, 22};
    printf("Bilangan terbesar dari array4 adalah = %d ",max(array4,7));
    puts("");

    return 0;
}







