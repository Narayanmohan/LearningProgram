/*Program No- p80.c
dt 8-10-2021
Concept: Looping while -> Pattern Printing
Next Program: Print the following * [ Asterisk] Pattern

*
**
***
****
-------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int ctr,rc;
ctr=0;
rc=1;


while(rc!=7)
{

while(ctr<rc)
{

    printf("*");
    
    ctr=ctr+1;


}
 printf("\n");
 rc= rc +1;
 ctr=0;
 

}


}

