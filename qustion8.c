#include<stdio.h>
/* program to convert a positive number into a negative number and negative
number into a positve number using switch statement ?
*/
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
    switch(a>0)
    {
        case 0: switch(a<0)
                 {
                     case 1: printf("%d",-a);

                 }
         break;
         case 1: printf("%d",-a);

    }

    return 0;
}