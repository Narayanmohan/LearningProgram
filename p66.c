/*Program P66.c
dt-8-8-2021
Concept-While Loop
Next Program: Read and Display the numbers other than 1000, count the numbers of positive,Negative and zeros
------------------------------------------------------------------------------------------------------------
Analysis:

Input: a,x,y, z

            x=0,y=0,z=0;

output: Print otherthen 1000 & count of posnegzero

Logic: 

Read/ input a;
Loop: while
Condition (a!=1000
    True => check a>=0
    x = x+1;
    
Print: Entered no is= %d and count of Pos = X",a);

False => check a<0;

True : Print: Entered no is= %d and count of Neg= Y",a);
False: Print: Entered no zero = %d and cound of zero= z",a)
-------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int a, x, y, z;
    x=0,y=0,z=0;
    
    while(a!=1000)
    {
        if(a>0)
          {
              x= x+1;
          }
    
       else if(a<0)
           {
               y= y+1;
           
           
           }    
           
       else
           {
           
               z= z+1;
                   
           }
               
     scanf("%d",&a);      
           
    
    }

  printf("%d%d%d",x,y,z);



} 