/*Program No-p270.c
dt-3-1-2022
Concept-Function
Next Program-Read any number from 0-999 and display in words
-------------------------------------------------------------*/
#include<stdio.h>
void singledigit(int num);
void teens(int num);
void tens(int num);
void twodigit(int num);
int main()
{

  int no,q,r;

  printf("Enter Any Number from 0-999\n");
 
 
 scanf("%d",&no);
 
   
  if(no>99&& no<=999) 
   {
 
     q=(no/100);
   
     singledigit(q);
 
     printf("Hundred");
 
 
         if(r=no%100)
         { 
             if(r>=11 && r<=19)
             {
             teens(r);	
             }
                                   
             else 
             {
             twodigit(r);
             }
         } 
 
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
  case 9:
  printf("Nine\n");
  break;
  default:
  printf("Not a valid Single Digit"); 
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
  printf("Not a valid Two Digit Number");
 
 }  
 
} 
 
void twodigit(int num)
{
  int q,r;

  q=num-(num%10);
  tens(q);

  r=num%10;
  singledigit(r);
  

}














