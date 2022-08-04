/*program No -p111.c
dt-8-29-2021
Concept: Char Array
Next Program: Read text until '$' is given and copy to another array 
----------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
 int i;
 char a[100];
 char b[100];
 
 
i=0;
 
scanf("%c",&a[i]);
 
while(a[i]!='$')
{
 
 i++;
 scanf("%c",&a[i]); 
 
}

a[i] = '\0';

i=0;

while(a[i]!='\0')

{

b[i] = a[i];
i++;


}


b[i]!='\0';

i=0;

while(b[i]!='\0')
{
 
 printf("%c",b[i]);
 
 i++;

}

} 