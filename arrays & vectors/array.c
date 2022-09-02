
#include <stdio.h>
int main()
{
    int size, i, pos, num;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be inserted: ");

    scanf("%d", &num);

    printf("Before Insertion : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    size++;
    for (i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = num;

    printf(" after Insertion : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}