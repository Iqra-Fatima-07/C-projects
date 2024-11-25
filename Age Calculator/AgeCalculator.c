#include<stdio.h>

int main()
{

int d1,m1,y1,d2,m2,y2,r1,r2,r3;
printf("\n------------------------------------------------------------------------------\n");
printf("\nWELCOME TO AGE CALCULATOR!!!\n");
printf("\n------------------------------------------------------------------------------\n");

printf("Enter Your Birthday DAY : ");
scanf("%d",&d1);
printf("Enter Your Birthday MONTH : ");
scanf("%d",&m1);
printf("Enter Your Birthday YEAR : ");
scanf("%d",&y1);
printf("Enter Current DAY : ");
scanf("%d",&d2);
printf("Enter Current MONTH : ");
scanf("%d",&m2);
printf("Enter Current YEAR : ");
scanf("%d",&y2);

if((d1 > 31 || d1 < 1) && (d2 > 31 || d2 < 1) && ((m1 > 1 || m1 < 12)) && ((m2 > 1 || m2 < 12)) && (y1 < 0 && y2 < 0 ))
{
  printf("You Entered Something Wrong!!\nInvalid date\nTRY AGAIN\n"); return 1; 
} else { 
    r3 = y2 - y1; 
    
    if (m2 < m1) { 
        r3 -= 1; 
        m2 += 12; 
    } 
    
    r2 = m2 - m1; 
    
    if (d2 < d1) { 
        r2 -= 1; 
        d2 += 30;
    }

    r1 = d2-d1;      
    
    printf("Your Age is %d years %d months %d days\n", r3, r2, r1 );
  }
return 0;
}