#include <stdio.h>

int main()
{
    /* code */

    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num%2 == 0)
    {
        /* code */
        printf("%d is a even number", num);
    }
    else{
        printf("%d is odd number", num);
    }
    

    return 0;
}

