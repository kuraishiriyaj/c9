#include<stdio.h>
/* convert the following if else if construct into swithc case

               if(var==1)

               printf("good");

               else if(var==2)

                printf("better");

                else if(var==3)

                  printf("best");

                  else

                  printf("invalid");
*/
int main()
{
int var;
printf("enter is the var");
scanf("%d",&var);
switch(var==1)
{
    case 1: printf("good");
      break;
     case 0 : switch(var==2)
       {
            case 1: printf("better");
              break;
            case 0: switch(var==3)
            {
                case 1: printf("best");
                break;
                case 0: printf("invalid");
            }
       }

}
    return 0;
}