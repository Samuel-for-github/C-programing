#include <stdio.h>

int main()
{
    

    int a = 10;
    int * p = &a;

    // int * q;
    // printf("a = %d ", a);
    // printf(", address of a is %x", p);

    // int c;
    // c = *p;
    // printf("c = %d", c);

    // *p = 20;

    printf("a is %x", &a);
    printf("p is %x", p);

    return 0;
}


