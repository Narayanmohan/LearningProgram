/*Program No- P68.c
dt-8-8-2021
Concept-While Loop
Next Program: Read and Display the number other than 1000 and Find the Avg of Pos , Neg Numbers 
---------------------------------------------------------------------------------------------------
Analysis:
Input: a, Avgpos,Avgneg,cp,cn
Avgpos=0,Avgneg=0,cp=0,cn=0;

Output Avg

Logic: Loop Condition: While(a!=1000)
T: check a>0
T: cp= cp+1;
sumpos= sumpos +a;

F: check a<0
T: cn = cn+1

sumneg= sumneg +a

Input a

Avgpos= Sumpox / cp

Avgneg= Sumneg/ cn

Print(avgpos, avgneg)
------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int a, cp,cn, avgpos,avgneg,sumpos,sumneg;
avgpos=0;
avgneg=0;
sumpos=0;
sumneg=0;
cp=0;
cn=0;

 scanf("%d",&a);

while(a!=1000)
{
       if(a>1)
        {

         cp= cp+1;
         sumpos= (sumpos+a);

        }
    
       else if(a<0)	
       {
         cn= cn+1;

         sumneg = (sumneg+a);
       }

      else
      {

       printf("Not valid = %d",a);

      }
     
       scanf("%d",&a);
     
}
 
    avgpos =(sumpos/cp);
    
    avgneg =(avgpos/cn);
 
    printf("avgpos =  %d,avgneg = %d",avgpos,avgneg);    

} 



