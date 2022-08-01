/* Program No- P29.c
dt-4-17-2021
Given operator is Arithmetic Operator or NOT 
--------------------------------------------
Analysis:

Input ar
Output arithmetic
Logic:
check
ar=='+'||ar=='-'||ar=='*'||ar=='/'

T = Arithmetic
F = Not a Arithmetic Operator 
---------------------------------------------*/
#include<stdio.h>
int main()
{

 char ar;
 
 scanf("%c",&ar);

     if(ar=='+'|| ar=='-'||ar=='*'||ar=='/')
  
         printf("Entered operator is Arithmetic =%c",ar);
  
     else
  
         printf("Entered opeartor is NOT a Arithmetic Opeartor = %c",ar);
}
  
  
  