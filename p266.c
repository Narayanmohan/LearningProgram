/*Program No-p266.c
dt-2-28-2022
Concept-Function
Next Program-Read single digit and Print it in words 
------------------------------------------------------------------------*/
#include<stdio.h>
void  printinword(int num);
int main()
{

   int no;
    
   scanf("%d",&no);
    
   printinword(no);
  

}

void printinword(int num)
{
          
    switch(num)
    {
    
        case 0:
            printf("zero\n");
        break;     
        
        case 1:
   
            printf("ONE\n");
        break;
   
        case 2:
            printf("Two\n");
        break;
        
        case 3:
            printf("Three\n");
        break;
        
        case 4:
            printf("Four\n");
        break;
        
        case 5:
            printf("Five\n");
        break;
        
        case 6:
            printf("Six\n");
        break;
        
        case 7:
            printf("Seven\n");
        break;
        
        case 8:
            printf("Eight\n");
        break;
        
        case 9:
            printf("Nine\n");
        break;
        
        default:
   
            printf("\n Not a valid Single Digit Number");
                    
    
    }


}


