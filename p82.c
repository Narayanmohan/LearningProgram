/*Program No- p82.c
dt-8-10-2021
Concept: Looping while + Pattern Printing * [ Star Pattern Printing ]
Next program : Print the following * Star pattern

     *
    **
   ***
  ****
 *****  

5 blank space 1 Asterisk
4 blank space 2 Asterisk
3 blank space 3 Asterisk
2 blank space 4 Asterisk
1 blank space 5 Asterisk
---------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int rc, space,ctr, num;
rc=1;
space=1;
ctr=0;

scanf("%d",&num);

while(rc<num)
{

 space=1;
 
 while(space <=(num-rc))
 {
      printf(" ");
  
      space= space+1;
 
 
 
 }   

ctr=0;

while(ctr<rc)
{

    printf("*");
 
    ctr = ctr +1;



}

    printf("\n");

    rc= rc+1;


}


}              