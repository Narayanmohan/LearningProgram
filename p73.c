/*Program No- p73.c
dt-8-10-2021
Concept: Looping
Next Program: Classify the given character is vowel or Not  and Print the vowel in words until $ is given
----------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
char cha;
scanf("%c",&cha);

while(cha!='$')
{

 if(cha=='a')
 
     printf("%c for Apple",cha);
 
 else if(cha =='e')
 
    printf("%c for Elegant",cha);
    
 else if(cha== 'i')
 
    printf("%c for Ink",cha);

 else if(cha=='O')
 
     printf("%c for Orange",cha);
     
 else if(cha=='u')
 
     printf("%c for Umbrella",cha);
     
 else
 
     printf("%c Not a vowel",cha);
     
     
scanf("%c",&cha);



}



}

 