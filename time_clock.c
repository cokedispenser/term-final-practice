#include<stdio.h>
#include<time.h>
#include<windows.h>

int hour(int h)
{
    if(h < 12) return h;
    else return h - 12;
}

char *ampm(int time)
{
    if(time < 12) return "AM";
    else return "PM";
}

int main(void)
{

    time_t raw;

    struct tm *now;

    

    system("cls");
    while(1)
    {
        time(&raw);
        now = localtime(&raw);
        printf("%02d : %02d : %02d  %s" , hour(now->tm_hour) , now->tm_min , now->tm_sec , ampm(now->tm_hour));
        Sleep(1000);
        system("cls");  
    }



    return 0;
}