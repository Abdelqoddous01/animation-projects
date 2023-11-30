#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define RESET "\x1b[0m"

void progressive_barr(){
    for (int i = 0; i <= 30; i++)
    {
        system("clear");
        printf("\n\n\n\n\t\t\t\t\t\t      D O W N L A O D I N G\n\t\t\t\t\t\t");
        for (int j = 0; j < i; j++)
        {
            if (i<9)
            {
                printf(RED"█"RESET);
            }
            else if(i>=9 && i<20){
                printf(YELLOW"█"RESET);
            }  
            else{
                printf(GREEN"█"RESET);
           }
        }
        printf("\n\n\t\t\t\t\t\t\t    %d%%",i*100/30);
        fflush(stdout);
        usleep(100010);
    }  
}

int main(){
    progressive_barr();
    return 0;
}