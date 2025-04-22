#include <stdio.h>
int main()
{
    // int n, m, sum = 0, arr[n][m];
    // printf("Enter rows : ");
    // scanf("%d", &n);
    // printf("Enter coloumns : ");
    // scanf("%d", &m);

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    int arr[2][2] = {{1, 2}, {3, 4}};
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("%d", sum);
}