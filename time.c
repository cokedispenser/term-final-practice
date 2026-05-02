#include<stdio.h>
#include<time.h>


int hour(int w);
char *ampm(int w);
char *day[7] = {"Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat"};
char *months[12] = {"Jan" , "Feb" , "Mar" , "Apr" , "May" , "Jun" , "Jul" , "Aug" , "Sep" , "Oct" , "Nov" , "Dec"};

int main(void)
{

    time_t raw;

    struct tm *now;

    time(&raw);

    now = localtime(&raw);

    printf("today:\n");
    printf("%d:%d:%d %s  %s\n" , now->tm_hour , now->tm_min , now->tm_sec , ampm(hour(now->tm_hour)) , day[now->tm_wday]);
    printf("%d %s, %d" , now->tm_mday , months[now->tm_mon] , now->tm_year + 1900);

}

int hour(int w)
{
    if(w < 12) return w;
    else return 12 - w;
}

char *ampm(int w)
{
    if(w < 12) return "AM";
    else return "PM";
}
