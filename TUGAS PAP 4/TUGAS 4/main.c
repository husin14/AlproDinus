#include "pustaka.h"

int main()
{
    int arr1[]={3,44,38,5,47};
    int arr2[]={15,36,27,2,26};
    float hasil1,hasil2;
            nama();
            puts("");
            puts("program menentukan median dalam barisan \n");
        puts(" ====Mencetak array 1======");
            cetak_angka(arr1,5);
            puts("\n Mencetak setelah di lakukan selection short");
            short_selection(arr1,5);
            hasil1 = get_median(arr1,5);
            printf("\n Maka median nya adalah : %.0f ",hasil1);

            puts(" ");
          puts("\n ====Mencetak array 2======");
            cetak_angka(arr2,5);
            puts("\n Mencetak setelah di lakukan selection short");
            short_selection(arr2,5);
            hasil2 = get_median(arr2,5);
            printf("\n Maka median nya adalah : %.0f ",hasil2);

puts("");

    return 0;
}
