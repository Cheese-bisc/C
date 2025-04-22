#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 12;
    int count = 0, i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = i + 1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
                count++;
        }
    }
    printf("%d", count);
    return 0;
}