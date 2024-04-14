#include "Helpers.h"

#include <stdio.h>

static void foo(int x, int y)
{
    HP_UNUSED(y);
    printf("x = %d\n", x);
}

static int sum(int x, int y)
{
    return x + y;
}

int main() 
{
    printf("Hello, World!\n");
    printf("I hope this works!\n");
    printf("Let's see what happens.\n");

    foo(123, 456);
    printf("Sum = %d\n", sum(3, 4));
    return 0;
}
