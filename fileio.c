#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ENTRY 5

typedef struct 
{
    char name[100];
    int st_no;
    int level;
    int term;
} Student;


int main(int argc , char *argv[])
{

    Student students[ENTRY] = {
                    {"Arko" , 2410147 , 1 , 2},
                    {"Avro" , 2220155 , 3 , 2},
                    {"Malek" , 2311142 , 2 , 2},
                    {"Payel" , 2001017 , 3 , 2},
                    {"Karim" , 2110047 , 4 , 1}
                };

    
    if(argc > 2)
    {
        printf("INVALID INPUTS");
        return 1;
    } 

    else
    {
        printf("Students Info.......\n\n");
        
    
        for(int i = 0 ; i < atoi(argv[1]) ; i++)
            {
                printf("%-5s    %d    L%d/T%d\n" , students[i].name , students[i].st_no , students[i].level , students[i].term);
            
            if (i >= ENTRY - 1)
                {
                    printf("No Data Found on rest %d Students\n" , atoi(argv[1]) - ENTRY);
                    break;
                }

            }


        
        
    }



    return 0;
}