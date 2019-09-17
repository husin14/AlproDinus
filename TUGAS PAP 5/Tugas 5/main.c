#include "pustaka.h"

int main()
{
    nama();
   printf("%s\n", at_least('r', 3, "Larry Page")?"true":"false");
    printf("%s\n", at_least('M', 2, "Matt Mullenweg")?"true":"false");
    printf("%s\n", at_least('a', 2, "Mark Zuckerberg")?"true":"false");
    printf("%s\n", at_least('m', 2, "Jimmy Wales")?"true":"false");
    return 0;
}
