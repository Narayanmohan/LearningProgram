/*
Program No- p106.c
dt 8-29-2021
Concept: Char Array
Next Program: Read and Display a line until '\n' is given

-----------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    int i;
    
    char a[100];
        
    i=0;
    
    scanf("%c",&a[i]);
    
    while(a[i]!='\n')
    {
  	i++;
    
        scanf("%c",&a[i]);
       
    }

    i=0;
    
    while(a[i]!='\n')
    {
    
     printf("%c",a[i]);
    
     i++;
    
    }


}