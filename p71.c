/*Program No: p71.c
dt-8-9-2021
Next Program: Read and Display the characters other than $, count upper, lower digit, specia characters
----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{


int uc, lc,dc,sc;

char c;

uc=0,lc=0,dc=0,sc=0;

scanf("%c",&c);


while(c!='$')
{

 if(c >=65 && c<=90)
 
 uc=uc+1;
 
 else if(c>=97 && c<=122)
 
 lc= lc+1;
 
 else if(c>=48 && c<=57)

 dc= dc+1;

else

sc = sc+1;

scanf("%c",&c);

}
printf("%d%d%d%d",uc, lc,dc,sc);


}
