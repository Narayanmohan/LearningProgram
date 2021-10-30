/*Program No- p118.c
date- 8-30-2021
Concept:Char Array
Next Program: Read text until '$' is given and delete comma 
----------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j;

char a[100];
char b[100];

i=0;
scanf("%c",&a[i]);

while(a[i]!='$')
{

    i++;
    
    scanf("%c",&a[i]);
    

}



a[i]!='\0';

i=0;
j=0;
while(a[i]!='\0')
{
     if(a[i]==',')
     {
 
        i++;
       // b[j] = a[i];
        
        
 
     }

     else
     {
     
         b[j] = a[i];
        
         j++;
         
         i++;
     
     }

}

b[j]!='\0';

j=0;

while(b[j]!='\0')
{
    
    printf("%c", b[j]);
    j++;

}


}