/*program No - p45.c
dt-4-18-2021
Program Name: Given character is lower case or Not

Note:

ASCII value of small a = 97 and z = 122
--------------------------------------------------------
Analysis:
        input: cha
        output: Lowercaseornot
        Logic:
            cha>=97 and cha <=122
            T : Print Lower case
            F : Print NOT a Lower case
-----------------------------------------------------*/
#include<stdio.h>
int main()
{

    char cha;
    scanf("%c",&cha);
    
            if(cha>=97 && cha <=122)
                printf(" Given character is lowercase = %c ", cha);
            else
                printf(" Given character is NOT a lowercase = %c ", cha);


}            