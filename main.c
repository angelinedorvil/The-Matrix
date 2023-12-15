#include <stdio.h>
#include <stdlib.h>
#include "tools.h"

extern void runAllTests();

int main()
{
    printf("Welcome to M4PA\n\n");
    runAllTests();
    return EXIT_SUCCESS;
}
