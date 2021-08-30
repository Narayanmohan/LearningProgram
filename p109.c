/*
Program No P109.c
dt 8-29-2021
Concept: Char Array
Next Program: Count the number of upper case, lower case,single digit or special characters until '$' is given 
-------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 
 int i,uc,lc,sc,sd;
 
 char a[100];
 
 uc=0;
 lc=0;
 sc=0;
 sd=0;
 
 
 i=0;

 scanf("%c",&a[i]);
 
 while(a[i]!='$')
 {
 
      i++;
      scanf("%c",&a[i]);
      
 
 }

i=0;

while(a[i]!='$')
{

 if(a[i]>=65 && a[i]<=90)
 {
     uc= uc +1;
 
 }

else if(a[i]>=97 && a[i]<=122)
{
    
    lc=lc+1;

}

else if(a[i]>=48 && a[i]<=57)
{

    sd= sd+1;

}
else
{
    sc= sc+1;

}


i++;

}


printf("%d%d%d%d",uc,lc,sc,sd);
}