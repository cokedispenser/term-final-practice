#include<stdio.h>

void swap(float *a , float *b);

void dsort(float *array , int size);

float sort_max(float *array);

int main()
{

    float array[] = {1,2,1.44,4.66,44.34,56,64.33,4.62};

    int size = sizeof(array) / sizeof(array[0]);

    dsort(array , size);

    float max = sort_max(array);

    for(int i = 0 ; i < size ; i++)
    {
        printf("%.2f " , array[i]);
    }

    printf("\nmax : %.2f" , max);


}

void swap(float *a , float *b)
{
    float temp = *a;

    *a = *b;

    *b = temp;

}

void dsort(float *array , int size)
{
    for(int i = 0 ; i < size - 1 ; i ++)
    {
        for(int j = 0 ; j < size - i - 1 ; j++)
        {
            if(array[j] < array[j + 1]) swap(&array[j] , &array[j + 1]);
        }
    }
}

float sort_max(float *array)
{
    return array[0];
}