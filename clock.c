#include<stdio.h>
#include<time.h>
#include<windows.h>



int main(void)
{

    clock_t start , end;

    start = clock();

    int sum = 1;
    for(int i = 1 ; i < 100000 ; i++)
    {
        for(int j = 1 ; j < 100000 ; j++) sum += i *j;
        
    }
    printf("%d\n" , sum);

    end = clock();

    float exe_time = (float)(end - start) / CLOCKS_PER_SEC;

    printf("Execution time : %f" , exe_time);

}
