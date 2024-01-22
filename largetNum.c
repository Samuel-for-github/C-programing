#include <stdio.h>


int main()
{
    
    int num[] = {2,3,4,9,6};

    int size = sizeof(num)/sizeof(num[0]);

    int largest = -1;
    int secondLargest = -1;
    for (int i = 0; i <size; i++)
    {

        if (num[i]>largest)
        {
            secondLargest = largest;
            largest = num[i];
        }
        
    }
    printf("%d", largest);
    


    return 0;
}
