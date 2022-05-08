#include <stdio.h>
void bubbleshort(int arr[], int size)
{
    int i, j, temp;
    for (int i = 0; i < size - 1; i++)

    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The shorted is as follows: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100], size;
    printf("Enter the number of element: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
    {
        printf("Enter the no of element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleshort(arr, size);

    return 0;
}
