#include <stdio.h>
#include <unistd.h>
#include <string.h>


void animation(char text[],int size){
    int j=0;
    while (j<=size)
    {
        printf("\033[2J\033[H");
        printf("\n\n\n\t\t\t\t");
        for (int i = 0; i <=j; i++)
        {
            printf("%c",text[i]);
        }
        fflush(stdout);
        usleep(100000);//you can use also sleep() 
        j++;
    }   
}

int main(){
    animation("W O R D",strlen("W O R D"));
    return 0;
}