#include<stdio.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{

    int max = 0 , min = 10000;
    int *ptrA , sum = 0;
    int size = atoi(argv[1]);
    if(argc != 2) printf("usage : .\\program.exe [array-size(int)]");
    ptrA = (int *)malloc(size * sizeof(int));

    for(int i = 0 ; i < size ; i++)
    {
        printf("number - %d : " , i + 1);
        scanf("%d" , ptrA + i);
        sum += *(ptrA + i);
    }

    ptrA = (int *)realloc(ptrA , 2 * size);

    for(int i = size ; i < 2 * size ; i++)
    {
        printf("number - %d : " , i + 1);
        scanf("%d" , ptrA + i);
        sum += *(ptrA + i);
    }

    printf("unique numbers:\n");
    for(int i = 0 ; i < 2 * size ; i++)
    {
        int IsUnique = 1;
        for(int j = 0 ; j < 2 * size ; j++)
        {

            if(i != j && *(ptrA + i) == *(ptrA + j))
            {
                IsUnique = 0;
                break;
            }

        }
        if(IsUnique) printf("%d " , *(ptrA + i));
    }

}

