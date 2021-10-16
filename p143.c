/*program No- p143.c
dt-10-16-2021
Concept- FOR LOOP
Next Program- Read and Print the character until '$' is given
-----------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

char cha;

scanf("%c",&cha);

for(; cha!='$' ;)
{

    printf("%c",cha);
    
    scanf("%c",&cha);


}

}