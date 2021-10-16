/*Program No- p145.c
dt-10-16-2021
Concept- For Loop
Next Program-count number of upper, lower, single digit, special character until '$' is given 
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int uc,lc,dc,sc;
char c;

uc=0;
lc=0;
dc=0;
sc=0;


for(scanf("%c",&c); c!='$'; scanf("%c",&c))
{

    if(c>=65 && c<=90)
    uc= uc+1;

    else if(c>=97 && c<=122)
    lc= lc+1;

    else if(c>=48 && c<=57)
    dc= dc+1;

    else
    sc= sc+1;


} 

printf("\n count of upper case = %d, count of lower= %d, count of digit=%d , count of special charcter=%d",uc,lc,dc,sc);

}