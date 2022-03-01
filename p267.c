/*Program No-p267.c
dt-2-28-2022
Concept-Function
Next Program-Read numbers from 11 to 19 and Print in words
----------------------------------------------------------------------------*/
#include<stdio.h>
void prnword(int num);
int main()
{

    int no;
    
    scanf("%d",&no);
    
    if(no>=11 || no<=19)
    {
    
        prnword(no);
    
    }

}
 

 void prnword(int num)
  {
  
      switch(num)
      {
      
          case 11:
              printf("Eleven \n");

          break;
          
          case 12:
              printf("Twelve \n");

          break;
          
          case 13:
             printf("Thirteen \n");
          
          break;
          
          case 14:
             printf("Fourteen \n");
          
          break;
          
          case 15:
              printf("Fifteen \n");
          
          break;
          
          case 16:
             printf("Sixteen \n");

          break;	
       
         case 17:
            printf("Seventeen \n");
            
          break;
        
         case 18:
          printf("Eighteen\n");

        break;
         
         case 19:
         printf("Nineteen \n");
        
         break; 
 
         default:
          
         printf("Not a valid single digit ");
    
      }
  
  }


