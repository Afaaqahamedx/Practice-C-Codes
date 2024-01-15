#include <stdio.h>
#define SIZE 10

void rotateByOne(int *arr[]);

int main()
{
    FILE *read, *write;
    read = fopen("data1.txt", "r");
    write = fopen("result1.txt", "w");

    int i, N;
    int arr[SIZE];

    //printf("Enter 10 elements array: ");
    for (i = 0; i < SIZE; i++)
    {
        fscanf(read, "%d\n", &arr[i]);
    }
    printf("Enter number of times to right rotate: ");
    scanf("%d", &N);

    N = N % SIZE;

    fprintf(write, "Array before rotation: ");
    for (i = 0; i < SIZE; i++)
    {
        fprintf(write, "%d ", arr[i]);
    }

    for (i = 1; i <= N; i++)
    {
        rotateByOne(&arr);
    }
    fprintf(write, "\n");
    fprintf(write, "\n\nArray after rotation\n");
    for (i = 0; i < SIZE; i++)
    {
        fprintf(write, "%d ", arr[i]);
    }
    return 0;
}

void rotateByOne(int *arr[])
{
    int i, last;
    last = *(arr + SIZE - 1);
    for (i = SIZE - 1; i > 0; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }
    *arr = last;
}
