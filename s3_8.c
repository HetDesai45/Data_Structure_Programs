#include <stdio.h>


void main()
{
    int arr[10];
    int i, size=10, pos;

    printf("Enter elements in array : ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element position to delete : ");
    scanf("%d", &pos);

    if(pos <= 0 || pos > size)
    {
        printf("Invalid position");
    }
    else
    {
        for(i=pos; i<=size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;

        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }
}