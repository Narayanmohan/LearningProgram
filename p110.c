/*
Program No- p110.c
dt-8-29-2021
Concept:Char Array
Next Program: Count the number of words, lines and character until '$' is given
-------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,word,lines,cha;
char a[100];

word=0;
lines=0;
cha=0;

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

 if(a[i] == '\n')
 {
 
  lines= lines + 1;
 
 }

else if(a[i]== ' ')
{
 word = word +1;

}
else 
{
 cha = cha +1;

}

i++;
}
printf(" \n%d \n%d \n%d  \n ",lines,word,cha);

}
