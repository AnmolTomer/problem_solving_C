/* 
Write a C program to print lower triangle of a square matrix.
For example the output of a given matrix 

2 3 4     will be       2 0 0
5 6 7                   5 6 0
4 5 6                   4 5 6
*/

#include <stdio.h>
int main()
{
    int dim, i, j;
    scanf("%d", &dim); // Take the dimension of square matrix from the user
    int arr[dim][dim];
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
        {
            if (j > i)
            {
                arr[i][j] = 0;
            }
            else
                continue;
        }
    }
    for (int i = 0; i < dim; i++)
    {
        printf("\n");
        for (int j = 0; j < dim; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    return (0);
}

// Solution provided by instructor

/*
#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i, j, r;

    scanf("%d", &r); //Accepts number of rows or columns

    for (i = 0; i < r; i++) //Accepts the matrix elements from the test case data
    {
        for (j = 0; j < r; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

// Complete the program to get the desired output. Use the printf() statement as
// printf("%d ", matrix[i][j]);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < r; j++)
        {
            if (i >= j)
                printf("%d ", matrix[i][j]);
            else
                printf("%d ", 0);
        }
        printf("\n");
    }
    return 0;
}
*/