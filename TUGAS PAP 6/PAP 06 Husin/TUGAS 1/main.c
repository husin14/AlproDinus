#include "header.h"

int main()
{
    nama();
    puts("");
    int list1 [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("1, 2, 3, 4, 5, 6, 7, 8, 9, 10");
    puts("");
    printf("HASILNYA ADALAH = %d",binary_searchh(3,list1,10));

    puts("");
    puts("");

    int list2 [] = {4, 8, 6, 1, 10, 3, 9, 2, 7, 5};
    printf("4, 8, 6, 1, 10, 3, 9, 2, 7, 5");
    puts("");
    printf("HASILNYA ADALAH = %d",binary_searchh(12,list2,10));
    return 0;
}
