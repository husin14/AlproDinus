#include "pustaka.h"

int main()
{
    nama();
    char a,b;
    int list1[] = {9, 12, 43, 13, 15};
    int pnjg_array = sizeof (list1) / sizeof (int);
    sequential_search(list1, pnjg_array,a,b);
    return 0;
}
