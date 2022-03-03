/*Program No-p269.c
dt-3-2-2022
Concept-Function
Next Program-Read numbers from 0-99 and Classify single digit,two digit,teen digit and based on users input between 0-99 the Function shall the return in words
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/ 
#include<stdio.h>
void singledigit(int num);
void teens(int num);
void tens(int num);

int main()
{

    int no,q,r;
    scanf("%d",&no);
    
    if(no>=0 && no<=9)
    {
        
        singledigit(no);
    
    }
    else if(no>=11 && no<=19)
    {
    
        teens(no);
    }
    else if(no%10==0)
    {
        tens(no);
    
    }
    else
    {
    
        q = no-(no%10);
        tens(q);
        
        r=no%10;
        singledigit(r);

  
    
    }

}


void singledigit(int num)
{

    switch(num)
    {
    
        case 0:
        printf("Zero\n");
        break;
        
        case 1:
        printf("One\n");
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
        printf("Not a valid single digit Number");
 
       } 
        
}


void teens(int num)
{
    switch(num)
    {
        case 11:
        printf("Eleven\n");
        break;
        
        case 12:
        printf("Twelve\n");
        break;
        
        case 13:
        printf("Thirteen\n");
        break;
        
        case 14:
        printf("Fourteen\n");
        break;
        
        case 15:
        printf("Fifteen\n");
        break;
        
        case 16:
        printf("Sixteen\n");
        break;
        
        case 17:
        printf("Seventeen\n");
        break;
        
        case 18:
        printf("Eighteen\n");
        break;
        
        case 19:
        printf("Nineteen\n");
        break;
        
        default:
        printf("Not a Teen Number");
        
     }    

}

void tens(int num)
{
  
  switch(num)
  {
  
   case 10:
   printf("Ten\n");
   break;
   
   case 20:
   printf("Twenty\n");
   break;
   
   case 30:
   printf("Thirty\n");
   break;
   
   case 40:
   printf("Forty\n");
   break;
   
   case 50:
   printf("Fifty\n");
   break;
   
   case 60:
   printf("Sixty\n");
   break;
   
   case 70:
   printf("Seventy\n");
   break;
   
   case 80:
   printf("Eighty\n");
   break;
   
   case 90:
   printf("Ninety\n");
   break;
   
   default:
   printf("Not a valid Two digits");
 
  
  }

}