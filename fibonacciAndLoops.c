#include <stdio.h>


int main()
{
    /* code */

    int a = 0;
    int b = 1;

    int n = 0;

    while (n<10)
    {
        int c = a +b;
        a = b;
        b = c;
        printf("%d\n", c);
        n++;
    }
    

    return 0;
}
