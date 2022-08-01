/*Program No- p108.c
dt-8-29-2021
Concept: Char Array
Next Program: Classify the given character is uppercase, lowercase,singledigit or speoial character until '$' is given 
-----------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;
char a[100];

i=0;
scanf("%c",&a[i]);

while(a[i]!='$')
{

 i++;
 scanf("%c",&a[i]);
 

}

a[i]='\0'; 

i=0;

while(a[i]!='\0')
{
    if(a[i]>=65 && a[i]<=90)
    {
    
        printf("%c is upper\n",a[i]);
        
        
        
    }

    else if(a[i]>=97 && a[i]<=122)
    {
    
        printf("%c is lower\n",a[i]);
    }

    else if(a[i]>=48 && a[i]<=57)
    {
        printf("%c is digit\n ",a[i]);
    
    }
    else
    {
        printf("special charactersc");
    
    }
i++;

}

}