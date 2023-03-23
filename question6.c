#include<stdio.h>
/*
  program to check whether a year is a leap year or not using switch statement ?
*/
int main()
{

 int year;
 printf("enter is the years");
 scanf("%d",&year);
 switch(year%4==0)
   {
      case 0:
        switch(year%100==0)
        {
            case 0:
                printf("not leap years");
            break;
            case 1:
            switch(year%400==0)
            {
                 case 0:
                       printf("not leap years");
                 break;
                 case 1:
                 printf("leap years:");
            }
             
        }
       break;
       case 1:
         printf("leap years:\n");
    
       
   }
    return 0;
}