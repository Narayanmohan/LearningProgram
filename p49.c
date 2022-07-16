/*Program No- p49.c
dt-4-18-2021
Next Program Name:Convert Lowercase to upper case
Note:
    -32 Logic
------------------------------------------------------------
Analysis:
    
        Input  : cha , lcu
        output : LowtoUpper
        Logic:
            check (cha>=97 && cha<=122)
                lcu = cha -32;
            Print lcu
------------------------------------------------------------*/
#include<stdio.h>
int main()
{

    char cha,lcu;
        

    scanf("%c", &cha);
    
        if(cha>=97 && cha<=122)
            {
            
                lcu = cha-32;
                
                printf("Given character converted to Lower to Upper successfully = %c ",lcu);
            
            }


        else
        
                printf("Not able to Convert to upper case = %c " ,lcu);
              


}
            