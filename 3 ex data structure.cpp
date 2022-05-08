#include <stdio.h>

int delete (int arr[], int size, int index)
{

    for (int i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    return 1;
}
int insert(int arr[], int size, int element, int index)
{

    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;

    return 1;
}

int main()
{
    int arr[40], size, i, index, condition, element;
    printf("Enter the number of elements of the array \n");
    scanf("%d", &size);

    printf("Enter the elements of the array\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter 1 for deletion and 2 for insertion\n");
    scanf("%d", &condition);

    switch (condition)
    {
    case 1:
    {

        printf("Enter the index of element to delete that element\n");
        scanf("%d", &index);

        delete (arr, size, index);
        size = size - 1;
        printf("Element is deleted :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        break;
    }

    case 2:
    {
        printf("enter the element which you want to insert and index\n");
        scanf("%d%d", &element, &index);

        insert(arr, size, element, index);
        size = size + 1;
        printf("Element is inserted :\n");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    break;
    }
    return 0;
}
