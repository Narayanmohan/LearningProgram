/*program No-p285.c
dt-6-6-2022
Concept-Function
Next Program-Read text until $ is given and find the length of the text
----------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
int len(char b[100]);
int totaltextlength;
int main()
{
    
char a[100];
char b[100];

read(a);

totaltextlength=len(a);

printf("%d",totaltextlength);

}

void read(char a[100])
{
    
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';
    
}

int len(char b[])
{
    
    int length;
    
    int j;
    
    length=0;
    
    for(j=0;b[j]!='\0';j++)
    {
        
        length=length+1;
        
    }       
 
 return length;

 
}