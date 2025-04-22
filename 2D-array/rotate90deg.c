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
    printf("\n");

    // transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++) // or j = i ; j < n
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    // output for transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // rotate
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = n - 1;

        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }

    // output after rotation
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}