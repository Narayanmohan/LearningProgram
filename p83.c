/* Program No- p83.c
dt-8-11-2021
Concept: Looping while - Print Star Pattern
Next Program: Print the following Pattern

     *
    ***
   *****
  *******
 *********
------------------------------------------*/
#include<stdio.h>
int main()
{

int rc,ctr, space, num;
rc=1;
ctr=0;
space=0;
num=0;

scanf("%d",&num);

while(rc < num)
{
 
  while(space < (num -rc))
  {
  
      space = space + 2;
  }


ctr=0;

while(ctr < rc)
{

printf("*");

ctr = ctr+1;

}

printf("\n");

rc= rc +2;


}


}              

