/*Program p167.c
dt-10-21-2021
Loop Concept- For Loop
Concept-Array in For Loop
Next Program-> Read and Display a word until 'space' is given
---------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;
char a[100];
    
for(i=0,scanf("%c",&a[i]); a[i]!=' '; i++,scanf("%c",&a[i]));

a[i]='\0';

for(i=0;a[i];i++)
{

    printf("%c",a[i]);
    
}



}