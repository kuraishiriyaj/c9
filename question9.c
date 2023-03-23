#include<stdio.h>
/* program to convert even number into upper nearest odd numbers 
switch statement ?
*/
int main()
{
    int a;
    printf("enter is the number");
    scanf("%d",&a);
    switch(a%2==0)
     {
          case 0: printf("%d",a);
                  
                break;
          case 1: printf("%d",a+1); 

     }

    return 0;
}