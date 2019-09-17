#include "pustaka.h"

int main()
{
    nama();
    int array1[5]  = {3,44,38,5,47};
    int array2[5]  = {15,36,27,2,26};

    cetak(array1, 5);
    bubble_sort(array1, 5);
    puts("");
    puts("\n-------------------");
    cetak(array1, 5);
    puts("\n=====================");
    cetak(array2, 5);
    bubble_sort(array2, 5);
    puts("");
    puts("\n-------------------");
    cetak(array2, 5);

    return 0;
}
