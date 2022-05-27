/* program No-p281.c
dt-5-6-2022
Concept-Function
Next Program-Count number of words, lines and Characters 
------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void count(char b[100]);

int words,lines,characters;

int main()
{

char a[100];

read(a);

count(a);

printf("Numberofwords=%d NoofLines=%d\n,Noofcharacters=%d\n",words,lines,characters);

}

void read(char a[100])
{

int i;

for(i=0;(a[i]=getchar())!='$';i++);


a[i]='\0';


}

void count(char b[100])
{

int j;

for(j=0;b[j];j++)
{
    
    if(b[j]=='\n')
    {
        lines=lines+1;
    
    }

    else if(b[j]==' ')
    {
        words=words+1;
    
    }

    else
    {
        characters=characters+1;
    
    }
}

}




