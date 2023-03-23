#include<stdio.h>
/*
write a program which takes the month number as an input
and display number of the days in that month ?
*/
int main()
{
    int monthnumber;
    printf("enter is the monthnumber");
    scanf("%d",&monthnumber);
    switch(monthnumber)
    {
        case 1: printf("january 31 days");
        break;
        case 2: printf("february 28ya29");
        break;
        case 3: printf("march 31 days");
        break;
        case 4: printf("aprail 30 days");
        break;
        case 5: printf("may 31 days");
        break;
        case 6: printf("june 30 days");
        break;
        case 7: printf("july 31 days");
        break;
        case 8: printf("august 31 days");
        break;
        case 9: printf("september 30 days");
        break;
        case 10: printf("october 31 days");
        break;
        case 11: printf("november 30 days");
        break;
        case 12: printf("december 31 days");
        break;
        default: printf("invalid month number");
    }

    return 0;
}