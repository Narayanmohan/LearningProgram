/*Program No-P392a.c
dt-11-26-2022
Concept-Assign Entire Function into Pointer
Next Program-Sum of Two Numbers using Function and Assign the Function to Pointer
--------------------------------------------------------------------------------------------*/
#include<stdio.h>
int sum(int firstnum, int secondnum);
int main()
{
    
 int firstnum,secondnum,result;
 
 int(*ptsum)();
 
 scanf("%d%d",&firstnum,&secondnum);
 
 ptsum=sum;
 
 result =(*ptsum)(firstnum,secondnum);
 
 printf("Sum of Two Number is = %d\n",result);
    

}

int sum(int firstnum, int secondnum)
{

    return firstnum + secondnum;


}