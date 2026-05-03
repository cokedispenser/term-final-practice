#include<stdio.h>
#include<stdlib.h>

int add(int x , int y)
{
    return x + y;
}
int sub(int x , int y)
{
    return abs(x - y);
}

void calculate(int x , int y , int(*operation)(int , int))
{
    printf("result = %d" , operation(x , y));
}

int main(int argc , char *argv[])
{

    if(argc < 3) return 1;
    else
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[2]);
        calculate(x , y , add);
        calculate(x , y , sub);
    }


    return 0;
}