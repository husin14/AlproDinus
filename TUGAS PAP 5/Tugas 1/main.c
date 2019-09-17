#include "pustaka.h"

int main()
{
    int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};
    int pnjg_array = sizeof (data) / sizeof (int);

    sequential_search(data,pnjg_array,15);
    puts("");
    sequential_search(data,pnjg_array,18);
    puts("");
    sequential_search(data,pnjg_array,39);
    puts("");
    sequential_search(data,pnjg_array,17);
    puts("");
    return 0;
}
