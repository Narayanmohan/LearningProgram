/*Program No-p174.c
dt-11-8-20213
Concept-Char Array
Loop- For Loop
Next Program-Count the number of words, lines and character until '$' is given 
--------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i, word,lines;

char cha;

char a[100];

word=0;

lines=0;

cha=0;

for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';


for(i=0;a[i];i++)
{

    if(a[i]=='\n')
    {
        
        lines=lines+1;
    
    }

    else if(a[i]==' ')
    {
    
        word=word+1;
    }
    else
    {
    
        cha=cha+1;
    }


}

printf("\n lines= %d, word= %d, cha= %d",lines,word,cha);

}