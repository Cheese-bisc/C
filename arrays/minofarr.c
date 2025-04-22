#include <stdio.h>
int main()
{
    int arr[5] = {3, 6, -76, -34, -2};
    int min = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d", min);

    return 0;
}