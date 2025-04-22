#include <stdio.h>
int main()
{
    int n;

    printf("Enter rows/coloumns :");
    scanf("%d", &n);

    int arr[n][n];

    // input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // wave2
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)

                printf("%d ", arr[i][j]);
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)

                printf("%d ", arr[i][j]);
        }
    }
}