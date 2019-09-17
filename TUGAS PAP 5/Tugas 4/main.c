#include "pustaka.h"

int main()
{
    nama();
    int list1[] = {9, 12, 43, 13, 15};
    int pnjg_array = sizeof (list1) /sizeof (int);
    sequential_search(list1,pnjg_array);

    puts("");
    int list2[] = {12, 4, 19, 9, 22, 1};
    int pnjg_array2 = sizeof (list2) /sizeof (int);
    sequential_search(list2,pnjg_array2);

    puts("");
    int list3[] = {8, 21, 29, 17, 20, 13};
    int pnjg_array3 = sizeof (list3) /sizeof (int);
    sequential_search(list3,pnjg_array3);

    puts("");
    int list4[] = {18, 11, 19, 25, 31, 15};
    int pnjg_array4 = sizeof (list4) /sizeof (int);
    sequential_search(list4,pnjg_array4);
    return 0;
}
