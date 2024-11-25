#include<stdio.h>
#include<stdlib.h>
#include<windows.h> //for sleep & cls

int main() {
    int seconds, minutes, hours;
    int d = 1000; //delay in millisec

    printf("set time! \n");
    printf("enter hours : \n");
    scanf("%d", &hours);
    printf("enter minutes : \n");
    scanf("%d", &minutes);
    printf("enter seconds\n");
    scanf("%d", &seconds);


    if (hours > 12 || minutes > 59 || seconds > 59 )
    {
        printf("error: Invalid time format! \n");
        exit(0);
    }
    
    
    while (1) {
        seconds++;
        if(seconds > 59)
        {
            minutes++;
            seconds = 0; 
        }

        if (minutes > 59)
        {
            hours++ ;   
            minutes = 0;
            
        }

        if(hours > 12)
        {
            hours = 1;
        }
    
     
        printf("clock : \n");
        printf("%02d:%02d:%02d", hours, minutes, seconds);
        Sleep(d); //use capital S .... used for delay after 1 sec
        system("cls");
      
    }

    return 0;

}


  