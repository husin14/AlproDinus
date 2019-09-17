#include "pustaka.h"

int main()
{
    int arr1[] = {3,44,38,5,47};
    int arr2[] = {15,36,27,2,26};
        nama();
        puts("");
        puts("Program mengurutkan angka jika telah urut maka berhenti \n");
        cetak_array(arr1,5);
        puts("==> Maka urutan angka nya adalah : ");
        selection_short(arr1,5);
        puts("===================================");
        cetak_array(arr2,5);
        puts("==> Maka urutan angka nya adalah : ");
        selection_short(arr2,5);
    return 0;
}
