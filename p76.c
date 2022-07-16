/* Program No- p76.c
dt-8-10-2021
Concept: Looping while
Next Program: Biggest of 10 Numbers 
--------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int c, ctr,a;
c=0;
ctr=1;

while(ctr<10)
{

    scanf("%d",&a);
    
      if(c<a)
      {
      
          c=a;
             
      
      }

      ctr= ctr +1;

}

printf("%d",c);

}






