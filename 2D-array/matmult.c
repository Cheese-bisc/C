#include <stdio.h>
int main()
{
    int m, n, p, q;

    // input 1st matrix
    printf("Enter number of rows of 1st matrix :");
    scanf("%d", &m);
    printf("Enter number of coloumns of 1st matrix :");
    scanf("%d", &n);

    int arr[m][n];

    printf("Enter 1st matrix:\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // input 2nd matrix
    printf("Enter number of rows of 2nd matrix :");
    scanf("%d", &p);
    printf("Enter number of coloumns of 2nd matrix :");
    scanf("%d", &q);

    int brr[p][q];

    printf("Enter 2nd matrix:\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }

    int res[m][q];

    // multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("\n");
    printf("Resultant matrix:\n");
    // print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}