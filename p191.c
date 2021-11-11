/*Program-p191.c
dt-11-10-2021
Concept- Char Array
Loop- For Loop
Next Program-Count the number of times the given pattern exist
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,j,k,count;

char a[100];
int  b[100];

for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';

for(j=0;(b[j]=getchar())!='$';j++);

b[j]='\0';


for(i=0,count=0;a[i];i++)
{


    for(k=i,j=0;a[k]==b[j]&& b[j]!='\0';k++,j++);
    
    if(b[j]=='\0')
    {
    
        count=count+1;
        
    }

}
printf("%d The Number of times the pattern exist = ",count);

}