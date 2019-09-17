#include "pustaka.h"

int main()
{
     int arr1[] = {3, 5, 38, 0, 44, 47 };
     int pjg1 = sizeof (arr1) / sizeof (int);
     int arr2[] = {3,0,44,38,0,5,47};
     int pjg2 = sizeof (arr2) / sizeof (int);
     int arr3[] = {2,15,0,0,0,26,27,36};
     int pjg3 = sizeof (arr3) / sizeof (int);
     int arr4[] = {15,36,27,0,0,2,26};
     int pjg4 = sizeof (arr4) / sizeof (int);
     nama();
     printf("Program menghilangkan angka 0 dalam sebuah bilangan\n");
     printf("===> sebelum di ubah\n");
        cetak_array(arr1,pjg1);
        puts("");
        cetak_array(arr2,pjg2);
        puts("");
        cetak_array(arr3,pjg3);
        puts("");
        cetak_array(arr4,pjg4);

     printf("\n ===> setelah di ubah\n");
        compres_array(arr1,5);
        puts("");
        compres_array(arr2,6);
        puts("");
        compres_array(arr3,7);
        puts("");
        compres_array(arr4,6);

     return 0;
}
