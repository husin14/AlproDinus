#include "pustaka.h"

int main()
{   int arr1[] = { 3, 44, 38, 5, 47}; int pjg1=sizeof (arr1) / sizeof (int);
    int arr2[] = { 15, 36, 27, 2, 26}; int pjg2=sizeof (arr2) / sizeof (int);
        nama();
        puts(" ");
        printf("Program Mengurutkan Bilangan \n");
        cetak(arr1,pjg1);
        puts("==> Maka hasil pengurutan adalah : \n");
        selection_short(arr1,5);
        puts(" ");
        cetak(arr2,pjg2);
        puts("==> Maka hasil pengurutan adalah :\n");
        selection_short(arr2,5);

    return 0;
}
