/*
Program No- p105.c
dt-5-29-2021
Concept:Char Array
Next Program:Read and Display a sentence until '.' is given 
------------------------------------------------------------------------*/
#include<stdio.h>
int main()

{
int i;

char a[100];

i=0;

while(a[i]!='.')
{
    
    scanf("%c",&a[i]);
 
    i++;

}
 

i=0;

while(a[i]!='.')
{
 
    printf("%c",a[i]);
    
    i++;   
    
} 


}