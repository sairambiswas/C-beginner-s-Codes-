#include <stdio.h>
void bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j]= arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selection_sort(int arr[], int n){
    int i,j,min_index;
    for (i = 0; i < n - 1; i++){
    min_index = i;
    for (j = i + 1; j < n; j++)
    {
        if(arr[j]<arr[min_index]){
            min_index = j;
        }
    }
    int temp = arr[min_index];
    arr[min_index] = arr[i];
    arr[i] = temp;
    }
}

void insertion_sort(int arr[], int n){
    int i ,key,j;
    for (i = 1; i < n; i++){
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j = j - 1;
    }
    arr[j + 1] = key;
    }
}

int main()
{
    int arr[1000], n, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

}
printf("\nChoose sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    scanf("%d", &choice);
    switch (choice)

    {
        case 1:
         bubble_sort(arr, n);
         break;
        case 2:
        selection_sort(arr, n);
         break;
        case 3:
        insertion_sort(arr, n);
         break;
        default:
        printf("Invalid choice!\n");
        break;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    return 0;
}
