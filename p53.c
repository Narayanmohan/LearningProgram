/*program No - p53.c
dt-4-18-2021
Program Name : Print a word to the given vowel
--------------------------------------------------------
Analysis:
    Input:  char cha
    output: vowelsinword

    Logic:
            case 'a':
                print('Apple');
            break;
            -
            -
            -
            -
            -
            case 'u'
                print('Umbrella');
            break;
            default:
                print("Print word only for vowel")
            
----------------------------------------------------------*/
#include<stdio.h>
int main()
{
    char cha;
    scanf("%c",&cha);
    
    switch(cha)
    {
    
        case 'a':
        
            printf("word for the given vowel is Apple = %c ",cha);
        
        break;
        
        case 'e':
        
            printf("word for the given vowel is Elegant = %c",cha);
        
        break;
        
        case 'i':
        
            printf("word for the given vowel is Ink = %c ", cha);
        
        break;
        
        case 'o':
        
            printf("word for the given vowel is Orange = %c ", cha);
        
        case 'u':
        
            printf("word for the given vowel is Umbrella = %c ",cha);
        break;
    
        default:
            printf("Print word only for the vowel and Not for other letters = %c ",cha);
    
     
    
    
    
    }













}            
            