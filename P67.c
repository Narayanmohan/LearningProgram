/*program No- p67.c
dt 8-8-2021
Next Program: Read and Display the numbers other than 1000 and Find sum of positive, negative numbers 
-----------------------------------------------------------------------------------------------------
Analysis:

Input: a, pos, neg

pos=0, Neg=0;

Output: SumofPosandSumofNeg:


Logic:
 Loop => while
 
         contition (a!=1000)
         T: Check a>0
            Pos =Pos+a;
         F: Check a<0
            Neg=Neg+a;
            
        Input a
        
outside the loop: Print sumofPosandSumofNeg 
------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int a, pos, neg;
pos=0;
neg=0;
scanf("%d",&a);

while(a!=1000)
{

    if(a>0)
        
        pos= pos+a;
    
    else if( a<0)
    
        neg= neg+a;

    else
    
      printf("%d",a);
      
      scanf("%d",&a);


}

printf("%d%d",pos,neg);



}