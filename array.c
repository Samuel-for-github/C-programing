#include <stdio.h>

int main()
{

    int num[]= {1, 2, 3,33,3243,324324,3431,432,322,276656,5678,4657,9867,54546,775};

    int sum = 0;
    double avg;
    int size =  sizeof(num)/sizeof(num[2]);
for (int i = 0; i < size; i++)
{
  sum += num[i];
  avg = sum/size;
}

printf("sum is %d and average is %.2lf ",sum, avg);



    return 0;
}
