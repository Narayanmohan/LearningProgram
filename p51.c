/*program No- p51.c
dt-4-18-2021
Program Name: Print a word to the given vowel
---------------------------------------------
Analysis:
    input  cha;
    output:Vowelinword
    Logic:
        check
            cha =='a'
                 T: print 'Apple'
             F: check cha =='e'
                 T: print 'elegant'
            _
            -
            -
            -
            
            F:check cha=='u'
                T:print 'Orange'
            else
                Print No word other than vowel
----------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char cha;
    scanf("%c",&cha);
        
            if(cha=='a')
                printf("Word for the given vowel is Apple = %c ",cha);
            
            else if (cha == 'e')
                printf("Word for the given vowel is Elegant =%c ",cha);
                
            else if( cha== 'i')
                printf("Word for the given vowel is Ink = %c ",cha);
                
            else if(cha=='o')
                printf("word for the given vowel is Orange = %c ",cha);
                
            else if(cha =='u')
                printf("word for the given vowel is Umbrella = %c ",cha);
                
            else
                printf(" print word only for vowel NOT for other letters = %c ",cha);
                
                


}                