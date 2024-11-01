#include <stdio.h>
void posorneg(int arr[], int size, int num)
{
    int i, pos = 0, neg = 0, odd = 0, even = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] % 2 == 0)
        {
            even++;
        }
    }
    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
}

int main()
{
    int arr[2500], num = 5, i;
    printf("Enter the elements  of the array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    posorneg(arr, 5, num);
    return 0;
}
