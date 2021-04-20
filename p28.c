/*Program No -p28.c
dt 4-17-2021
If conditional structure
Given Character is vowel or Not
----------------------------------------
Analysis:

Input : Cha
Output: VowelorNot
Logic check

cha=='a'||cha=='e'||cha='i'||cha=='o'||cha=='u'

True = vowel
False =  Not a vowel
------------------------------------------ */

#include<stdio.h>
int main()
{

    char cha;

    scanf("%c",&cha);
    
    if(cha=='a'||cha =='e'||cha=='i'||cha=='o'||cha=='u')
    
        printf("Entered character is vowel = %c",cha);
    
    else
    
       printf("Entered character is Not a vowel =%c",cha);
        
}
    




















