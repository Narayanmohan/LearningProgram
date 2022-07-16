/*program No - p41.c
dt -4-18-2021
Concept: Nested Ternary Expression
Next Program: Smallest of 3 Numbers
-----------------------------------------------
Analysis:

      input a,b,c;
      ouput smallest3
      Logic:
              smallest3 = a<b?(a<c?a:c):b<c?b:c
              Print smallest3
---------------------------------------------*/
#include<stdio.h>
int main()
{
    int a, b, c,smallest3;

    scanf("%d%d%d",&a,&b,&c);
    
    smallest3 = a<b?(a<c?a:c):b<c?b:c;
    
    printf("Smallest of thress is =  %d ", smallest3);



}              