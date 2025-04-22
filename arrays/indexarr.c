#include <stdio.h>
int main()
{
    int arr[8] = {2, 4, 5, 8, 1, 4, 5, 9};

    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
            arr[i] = 2 * arr[i];

        else
            arr[i] = arr[i] + 10;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d \n", arr[i]);
    }
}