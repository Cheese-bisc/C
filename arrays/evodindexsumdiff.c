#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }
    int diff = evensum - oddsum;
    printf("%d", diff);

    return 0;
}