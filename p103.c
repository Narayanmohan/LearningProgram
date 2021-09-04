/*
Program No p103.c
dt 8-29-2021
Concept: CHAR ARRAY
Next Program: Read amd Display a word until ''[ space] is given 
----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

 int i;

 char a[100];
 
 i=0;

 scanf("%c",&a[i]);
 
 while(a[i]!=' ')
 {
 
     i++;

     scanf("%c",&a[i]);
      

 }

// \0= > means Marking that is the end of the array
a[i]='\0';

i=0;

while(a[i]!='\0')
{

    printf("%c",a[i]);

    i++;

}


}


