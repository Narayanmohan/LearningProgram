/* program No p144.c
dt-10-16-2021
Concept-For Loop
Next Program-Classify the given character is upper,lower, single digit,special character until '$'is given 
--------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

char cha;

for(scanf("%c",&cha); cha!='$'; scanf("%c",&cha))
{

    if(cha>=65 && cha <=90)
    printf("Upper case = %c\n",cha);
    
    else if(cha>=97 && cha <=122)
    printf("lower case = %c\n",cha);
    
    else if(cha>=48 && cha <=57)
    printf("digit = %c\n",cha);
    
    else
    printf("special character");
    



}


}
