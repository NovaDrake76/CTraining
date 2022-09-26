#include <stdio.h>

void printVector(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        printVector(arr, n);
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printVector(arr, n);
}

int main()
{

    int n, i, j, temp;
    int a[10];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);
}
