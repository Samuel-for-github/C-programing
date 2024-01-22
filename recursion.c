#include <stdio.h>

//theory

/*
what is rescursion?
=when function calls itself

types of rec

direct rec
indirect rec
tail rec
non tail rec

base condition to stop recursion

*/
//rec example

void display(int n){
    if (n<1)
    {
        return;
    }
    else{
        printf("%d", n);
        display(n-1);
        
    }
    
}


int main()
{
    int n = 3;

    display(n);

    return 0;
}

