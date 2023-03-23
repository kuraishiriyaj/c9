#include<stdio.h>
/* 
write a menu driver program with the falloowing options
a : Addition
b : Subtraction
c : Multiplication
d : Division
e : Exit
*/
int main()
{
 int a,b,Addition=0,Subtraction=0,Multiplication=0,Division=0;
 int choice;
 printf("Addtion=1,Subraction=2,Mulitplication=3,Divisons=4\n");
 
 printf("enter is the choice");
 scanf("%d",&choice);
 switch(choice)
 {
     case 1: printf("enter is the two number:\n");
             scanf("%d%d",&a,&b);
             Addition=a+b;
             printf("%d",Addition);
             break;
    case 2: printf("enter is the two number\n");
            scanf("%d%d",&a,&b);
            Subtraction=a-b;
            printf("%d",Subtraction);
            break;
    case 3: printf("enter is the two number");
             scanf("%d%d",&a,&b);
            Multiplication=a*b;
            printf("%d",Multiplication);
            break;
    case 4: printf("enter is the two number");
                scanf("%d%d",&a,&b);
            Division=a/b;
            printf("%d",Division);
            break;
        default:
        printf("invalid");
 }
 
    return 0;
}