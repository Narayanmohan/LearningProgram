/*program No- p124.c
dt-9-2-2021
Concept: Char Array
Next Program: Print Starting Position of each line
------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,po;


char a[100];
int b[100];
po=0;

i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{

    i++;
    
scanf("%c",&a[i]);

}

a[i]='\0';

i=0;

j=0;

b[j]= i;

j++; 

while(a[i]!='\0')
{

         if(a[i]=='\n')
         {
 
          
          po=i+1;
         
          b[j]= po;
         
          j++;
 
         }
       
        i++;
        

}


b[j] = -1;

j=0;

while(b[j]!=-1)
{

  printf("%d,  ",b[j]);

  j++;
    
}

}