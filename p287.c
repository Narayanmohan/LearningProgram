/*program No-p287.c
dt-6-16-2022
Concept-Function
Next Program-Reverse the given text
----------------------------------------------------------------------------------*/
#include<stdio.h>
void read(char a[100]);
void reverse(char a[100],char b[100]);
void display(char c[100]);
int len(char d[100]);

int main()
{
    int length;
    char a[100];
    char b[100];
    char c[100];
    char d[100];

read(a);

reverse(a,b);

display(b);


}


void read(char a[])
{
    int i;
    
    for(i=0;(a[i]=getchar())!='$';i++);
    
    a[i]='\0';


}

int len(char d[])
{

    int length;
    int l;
    length =0;

    for(l=0;d[l]!='\0';l++)
    {
    
        length =length+1;
    
    }


return length;
}

void reverse(char a[100],char b[100])
{

    int i,j,length;
    
    length = len(a);
    
    for(i=(length-1),j=0;i>=0;i--)
    {
    
    
        b[j]=a[i];

        j++;
    
    }

b[j] ='\0';

}


void display(char c[100])
{

    int n;
    
    for(n=0;c[n];n++)
    {
    
        putchar(c[n]);
    
    }


}
