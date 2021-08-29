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

 while(a[i]!='')
 {
 
     scanf("%c",&a[i]);
     i++; 
 
 
 }

i=0;

while(a[i]!='')
{

    printf("%d",a[i]);
    i++;

}



}


