/*Program No-p200.c
dt-11-24-2021
Concept-Structure
Next Program-Find the biggest of three numbers using struct by Ternary operators
-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

struct big3ternary
{

    int a,b,c,t,big3;
    

}big3ter;


scanf("%d%d%d",&big3ter.a,&big3ter.b,&big3ter.c);

big3ter.t = big3ter.a > big3ter.b ? big3ter.a:big3ter.b; 

big3ter.big3 = big3ter.t>big3ter.c?big3ter.t:big3ter.c;

printf("Biggest of Three Numbers is =%d", big3ter.big3); 


} 