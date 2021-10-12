/*Program No-p131.c
Concept:For Loop
Dt-10/11/2021
Next Program:Print the Number from 1 to 1000
----------------------------------------------------------
For Loop - Concept & Syntax

For(Initialization; Condition; Expression)
{

//statement
//statement
}


The For Loop starts with INITIALIZATION, then evaluate
the CONDITION, If the CONDITION is TRUE, then execute
the STATEMENT inside the block.After it executes the EXPRESSION
--------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;
i=1;
j= 1000;

for(i=1;i<=j;i++)
{

 printf("%d",i);

}


}


