/*Program No-P268.c
dt-3-1-2022
concept-Function
Next Program-Read numbers from 10..20...90 and Print in words
-------------------------------------------------------------------------------
General Notes:

    / = >if we use divide operator we can get single digit.
    
    % => if we use modulo operator we can get remainders.

-------------------------------------------------------------------------------*/
#include<stdio.h>
void prnword(int num);
int main()
{

    int no;
    scanf("%d",&no);
    prnword(no);

}

void prnword(int num)
{
    switch(num)
    {
    
        case 10:
            printf("Ten\n");
        break;
        case 20:
            printf("Twenty\n");
        break;
        case 30:
            printf("Thirty\n");
        break;
        case 40:
            printf("Forty\n");
        break;
        case 50:
            printf("Fifty\n");
        break;
        case 60:
            printf("Sixty\n");
        break;
        case 70:
            printf("Seventy\n");
        break;
        case 80:
            printf("Eighty\n");
        break;
        case 90:
            printf("Ninety\n");
        break;
        
        default:
        printf("Not a valid Number");
    }

}