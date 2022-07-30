/* program No- p112.c
dt-8-29-2021
Concept: Char Array
Next Program: Read text until '$' is given and copy first 'N' characters to another array 
--------------------------------------------------------------------------------------------
Example:

a => INDIA

N => 3

OUTPUT 

b=> IND
---------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 
int i,num;

char a[100];

char b[100];

i=0;

scanf("%c",&a[i]);

while(a[i]!='$')
{
    i++;

    scanf("%c",&a[i]);

}



a[i]='\0';

i=0;


scanf("%d",&num);

while(i<num)
{

       
    
    b[i] = a[i];
        
   
   i++;


}

b[i]='\0';

i=0;

while(b[i]!='\0')
{

    printf("%c",b[i]);

    i++;

}


}
 



