#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x = 5;
    int count = 0;

    for (int i = 0; i < 8; i++)
    {
        if (x < arr[i])
            count++;
    }
    printf("%d", count);
    return 0;
}