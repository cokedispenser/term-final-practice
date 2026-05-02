#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char *month[12] = {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
int main(int argc , char *argv[])
{
    clock_t start = clock();

    
    int *ptrA , sum = 0;
    int size = atoi(argv[1]);
    if(argc != 2) 
    {
        printf("usage : .\\program.exe [array-size(int)]");
        return 1;
    }
    ptrA = (int *)malloc(size * sizeof(int));

    for(int i = 0 ; i < size ; i++)
    {
        printf("number - %d : " , i + 1);
        scanf("%d" , ptrA + i);
       
    }

    ptrA = (int *)realloc(ptrA , 2 * size * sizeof(int));

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

    free(ptrA);
    
    clock_t end = clock();

    float exec_time = (float)(end - start) / CLOCKS_PER_SEC;

    time_t raw;

    time(&raw);

    struct tm *realtime;

    realtime = localtime(&raw);

    
    printf("\n%d %s, %d\n" , realtime->tm_mday , month[realtime->tm_mon] , realtime->tm_year + 1900);
    printf("execution time : %f" , exec_time);

    return 0;

}

