#include<stdio.h>
#include<stdlib.h>

int add(int *ptr, int size)
{
    int sum = 0;
    int i = 0;
    while(i < size)
    {
        sum += *(ptr + i);
        i++;
    }
    return sum;
}

int sub(int *ptr, int size)
{
    int result = *(ptr + 0);
    int i = 1;
    while(i < size)
    {
        result -= *(ptr + i);
        i++;
    }
    return abs(result);
}

void calculate(int *arr, int size, int(*operation)(int *, int))
{
    printf("result = %d\n", operation(arr, size));
}

int main(int argc, char *argv[])
{
    if(argc < 3) {
        printf("usage: .\\program.exe [numbers...]\n");
        return 1;
    }

    int size = argc - 1;
    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < size; i++)
    {
        arr[i] = atoi(argv[i + 1]);
    }

    calculate(arr, size, add);
    calculate(arr, size, sub);

    free(arr);
    return 0;
}