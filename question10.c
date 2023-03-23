#include<stdio.h>
/* c program to find  all roots of the quardic equations using switch case ?
*/
int main()
{
    int a;
    printf("enter is the number a");
    scanf("%d",&a);
    switch(a>0)
  {
      case 0 : switch(a<0)
               {
                  case 0: switch(a==0)
                          {
                             case 1: printf("this is the equal roots");
                               break;
                            
                          }
                  break;
                  case 1: printf("this is the imaginary roots");
               }
      break;
      case 1: printf("this is the real distince roots");

  }
    return 0;
}