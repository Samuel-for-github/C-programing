#include <stdio.h>

void birthday(char name[], short age)
{
    printf("\nHappy Birthday dear %s", name);
    printf("\nYou are %d years old!\n", age);
}

int main(int argc, char const *argv[])
{
    char name[] = "Samuel";
    short age = 18;

    birthday(name, age);

    char name1[] = "Bro";
    short age1 = 12;
    birthday(name1, age1);
    return 0;
}
