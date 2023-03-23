#include<stdio.h>
/* write a program which takes the day number of weak
and display unique greeting message for the days ?
*/
int main()
{
    int day;
    printf("enter is the day of the week");
    scanf("%d",&day);
    switch(day)
    {
         case 1: printf("this the vaction day");
         break;
         case 2: printf("it is the hot day");
         break;
         case 3: printf("it is rain");
         break;
         case 4: printf("this is the my fevourite day");
         break;
         case 5: printf("my college is closed");
         break;
         case 6: printf("it is the very nice day ");
         break;
         case 7: printf("this is the bad day");
         break;
         default:
         printf("invalid input");
    }

    return 0;
}