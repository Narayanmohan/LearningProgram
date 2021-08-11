/*program No- p79.c
dt- 8-10-2021
Concept: Looping while
Next Program: Print * [ Asterisk ] in the following Pattern

****
****
****
****
----------------------------------------------------------
Analysis:

Input : int rcnt,ccnt, ctr;

rcnt=1, ccnt=1,ctr=0;

output: Print * pattern

Logic: Looping while


    Condition ( rcnt !=4)
    
True

   Condition (ctr <4)
   
True

  Print *
  
  ctr= ctr +1;
  

False  print \n
       ctr =0
       rcnt = rcnt +1;
-----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int rcnt,ccnt,ctr;
rcnt=1;
ccnt=1;
ctr=0;

while(rcnt!=5)
{

    while(ctr<5)
    
    {
    
        printf("*");
        ctr= ctr +1;
    
    
    }
ctr=0;

printf("\n");

rcnt= rcnt +1;

}



}        


