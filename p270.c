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

  int num,q,r,s,t;

  printf("Enter Any Number from 0-999\n");

  scanf("%d",&num);
  
  if(num<=999)
  {
  
  if(num<100)
  {
  
    twodigit(num);
    
  }

  else if(num%100 ==0)
   { 
     q=(num/100);
     
     singledigit(q);

     printf("Hundred");
    
  
  }
  else   
    {
    
   
    q=num/100;
    singledigit(q);
    printf("Hundred"); 
   
 
    r =(num%100);
    twodigit(r);
 
    
}    


    
}    

 else
 {
 
  printf("Not a valid three digit \n");
 }

    
}

 
void twodigit(int num)
{

  int m,n;

  if(num >=0 && num<9)
  {
   singledigit(num);
  }
  else if(num>=11 && num<=19)
  {
   teens(num);
  }
  else if(num%10==0)
  {
   tens(num);
  }
  else
  {
  
    m=num -(num%10);
    tens(m);
    n=(num%10);
    singledigit(n);
  
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
printf("twelve\n");
break;

case 13:
printf("Thirteen\n");
break;

case 14:
printf("Fourteen\n");
break;

case 15:
printf("fifteen\n");
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
printf("Not a Teen No");

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
    printf("forty\n");
    break;
    
    case 50:
    printf("fifty\n");
    break;
    
    case 60:
    printf("sixty\n");
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
    printf("Not a valid two digit number");
  
  
  }

}
