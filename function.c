#include<stdio.h>
int called(int input);
void calling(int number);

int main()
{
    calling(called(12345));
}

int called(int input)
{
    int a = 1;
    int sum = 0;

    for(int i = 1  ; i <= input ; i *= 10)
    {
        int result = input % (10 * i);

        sum += result / i;

        input -= result;

    }

    if(sum > 9) return called(sum);
    else return sum;
}

void calling(int number)
{
    printf("sum of digits : %d" , number);

}