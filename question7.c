#include<stdio.h>
/* program to take the value from the user as input electricity unit 
charges and calculate total electricty bill according to the given condition
 uisng the switch statement 
 for the first 50 units Rs 0.50/unit
 for the nest 100 units Rs 0.75/unit
 for the above 250  Rs 1.50/unit
 add additional surcharge of 20% is added total bill?
*/
int main()
{
    float units=0;
    
    float e_bill;
    printf("enter is the unit");
    scanf("%f",&units);

   switch(units<=50)
    {
        case 0: switch(units<=100)
          {
            case 0: switch(units<=250)
                    {
                      case 0:
                       break;
                       case 1: e_bill=75+75+(units-250)*1.50;
                               e_bill=(e_bill*20)/100;
                               printf("%.2f",e_bill);
                    }
            break;
            case 1: e_bill=25+(units-100)*0.75;
                      e_bill=(e_bill*20)/100;
                      printf("%.2f",e_bill);

          }
        break;
        case 1: e_bill=(units*0.50);
        e_bill=(e_bill*20)/100;
                printf("%.2f",e_bill);
    }

    

    return 0;
}