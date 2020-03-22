#include <stdio.h>
int main()
{
    int i, j, r, c;
    scanf("%d %d", &r, &c);
    int mat1[r][c], mat2[r][c], mat_diff[r][c];
    // Take input for mat1
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Take input for mat2
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Calculate the difference and store in mat_diff
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat_diff[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        printf("\n");
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat_diff[i][j]);
        }
    }
}