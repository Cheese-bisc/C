#include <stdio.h>
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max = arr[0][0];
    int maxIdxi = -1;
    int maxIdxj = -1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                maxIdxi = i;
                maxIdxj = j;
            }
        }
    }
    printf("%d,%d", maxIdxi, maxIdxj);
}