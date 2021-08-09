/* Program No- P70.c
dt 8-8-2021
Concept: Looping
Next Program:Read and display characters other than $, is the  character is upper , lower,digit or Special characters 
-----------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

char cha;

scanf("%c",&cha);

while(cha!='S')
{

 if(cha >=65 && cha <=90)
  {
   printf("upper case  character= %c",cha);
  }
  else if(cha>=97 && cha <=122)
  {
  printf("lower case character= %c",cha);
  }
  else if(cha>=48 && cha <=57)
  {
   printf("digits = %c",cha);
  } 
 else
  {
  printf("special character = %c",cha);

  }
scanf("%c",&cha);
 }
printf("%c",cha);

}


