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

scanf("%c",&a[i]);

while(a[i]!='.')
{
    
    i++;
    scanf("%c",&a[i]);
 
    

}
 

a[i]='\0';

i=0;
while(a[i]!='\0')
{
 
    printf("%c",a[i]);
    
    i++;   
    
} 


}