/*Program No- p194.c
dt-11-11-2021
Loop- Do While
Concept - Do while Concept
Next Program-Print Numbers fromm 1 to 1000 using Do-while loop
-----------------------------------------------------------------------------------------
Do-While Syntax:
----------------
Do
{	
    //statement
    //Statement
}
While(Condition);

Note:

The Statements inside the block {  } will be executed first, and then condition will be checked.
It Continues to execute the statement until the condition fails.
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;

i=1;

    do
    {

        printf("\n%d",i);
        i++;

    }
    while(i<=1000);



}