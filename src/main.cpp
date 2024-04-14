#include "Helpers.h"

#include <stdio.h>

static void foo(int x, int y)
{
    HP_UNUSED(y);
    printf("x = %d", x);
}

int main() 
{
    printf("Hello, World!\n");
    printf("I hope this works!\n");
    printf("Let's see what happens.\n");

    foo(123, 456);
    return 0;
}
