#include <stdio.h>


int main()
{
    int num;
    printf("Enter a number for factorial\n");
    scanf("%d", &num);

   unsigned long factorial = 1;
    for (int i = 1 ; i <=num; i++)
    {
         factorial *= i;

    }
    printf("%d",factorial);
    


    return 0;
}
