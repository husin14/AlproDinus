#include "pustaka.h"

int main()
{
    nama();
     int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {5, 4, 3, 2, 1};

    printf("Kedua data = %s\n", is_inverse(list1,list2, 5)?"true":"false");
    printf("Kedua data = %s\n", is_inverse(list2,list2, 5)?"true":"false");
    return 0;
}
