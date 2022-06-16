/*program No p288.c
dt-6-16-2022
Concept-Function
Next Program-Read text until '$' is given and Merge the text
--------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void merge(char a[100],char c[100]);
void display(char c[100]);
int len(char c[100]);
int length;
int main()
{
char a[100];
char b[100];
char c[100];

read(a);
read(b);
merge(a,c);
merge(b,c);

printf("After Merge = %s",c);

display(c);

}

void read(char a[])
{
    int i;

    for(i=0;(a[i]=getchar())!='$';i++);

    a[i]='\0';


}

int len(char c[100])
{

    int j;
    
    length =0;
    
    
    for(j=0;c[j]!='\0';j++)
    {
    
        length = length +1;
    
    }
return length;

}



void merge(char a[],char c[])
{

int i,j;

length=len(c);

printf(" c b4 merging = %s",c);

printf("%d",length);

    for(i=0,j=length;a[i];i++,j++)
    {
        c[j]=a[i];

    }

c[j]='\0';
}

void display(char c[])
{
    int n;
    
    for(n=0;c[n];n++)
    {
        
        putchar(c[n]);    
    }


}


