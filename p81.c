/*program No- p81.c
dt-8-10-2021
Concept: Looping while + Star pattern 
Next Program: Print the following Pattern

Notes:
when inner loop increments by rc= rc+1 then it goes to outer while loop and then it assigns ul=6.


******
*****
****
***
**
*
-----------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int rc,ul,a;
rc=1;

scanf("%d",&a);
while(rc<a)
{
   ul=a;

   while(ul>rc)
   {
   
    printf("*");
    ul= ul-1;
   
   }

printf("\n");
rc=rc+1;

}




}
