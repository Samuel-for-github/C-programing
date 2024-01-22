#include <stdio.h>

int main()
{

    char sign;
    float num1;
    float num2;

    printf("Enter the sign +,-,*,/\n");
    scanf("%c", &sign);

    printf("Enter num1\n");
    scanf("%f", &num1);

    printf("Enter num2\n");
    scanf("%f", &num2);

    switch (sign)
    {
    case '+':
        printf("%.3f + %.3f = %f.3", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.3f - %.3f = %.3f", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.3f * %.3f = %.3f", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.3f / %.3f = %.3f", num1, num2, num1 / num2);
        break;
    default:
    printf("Wrong input sign");
        break;
    }

    return 0;
}
