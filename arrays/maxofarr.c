#include <stdio.h>
int main()
{
    int arr[6] = {2, 7, 23, 5, 9, 56};

    int max = arr[0];
    for (int i = 0; i <= 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    printf("%d", max);
}
