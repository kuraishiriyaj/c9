#include<stdio.h>
/* write a menu driven program with the fallowing option
 A : check wheither a given set of three numbers are lenght of
 an isosceles tringle or not ?
 B : check wheither a given set of three numbers ar lenght of 
 a right angle triangle or not ?
 C : check wheither  a given set of three numbers ae equivellenttringles
 or not ?
     

*/
int main()
{
  int a,b,c;
  printf("enter is the three numbers");
  scanf("%d%d%d",&a,&b,&c);
  switch(a==b&&b==c)
      
  {
          case 0:
                  switch(a==b||a==c||b==c)
                  {
                    case 0:
                    a=a*a,b=b*b,c=c*c;
                    switch(a==(b+c)||b==(a+c)||c==(a+b))
                    {
                      case 1:
                        printf("this is right angle tringle\n");
                        break;
                        case 0:
                        printf("this is not right angle and equavelent adn isoceles trigle");
                    }
                  
                    break;
                    case 1:
                      printf("this is isosceles tringles:\n");
                  }
          break;
          case 1:
            printf("this is the equavellnet tringles\n");
  }
    return 0;

}