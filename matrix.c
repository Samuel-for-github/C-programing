#include <stdio.h>


int main()
{
/*
int number[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7, 8, 9}
                    };



int rows = sizeof(number)/sizeof(number[0]);
int columns = sizeof(number[0])/sizeof(number[0][0]);
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d ", number[i][j]);
    }
    printf("\n");
    
}
*/


/*
    int mat[2][2] = {
        {1,2},
        {3,4}
        };


    int sum = 0;
    int product = 1;

    int rows = sizeof(mat)/sizeof(mat[0]);
    int columns = sizeof(mat[0])/sizeof(mat[0][0]);
    for (int i = 0; i < rows; i++)
    {
        
        for (int j = 0; j < columns; j++)
        {
            sum += mat[i][j];
            product *= mat[i][j];
        }
        
    }
    printf("sum is %d and product is %d", sum, product);
*/

  int mat[2][3] = {
        {1,2,3},
        {4,5,6}
        };

    int matB[3][2];

   int rows = sizeof(mat)/sizeof(mat[0]);
    int columns = sizeof(mat[0])/sizeof(mat[0][0]);
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            matB[3][2] = mat[j][i];
            printf("% d", matB[3][2]);
        }   
        printf("\n");
    }
    

    return 0;
}
