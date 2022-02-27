/*program No-p265.c
dt-2-26-2022
Concept-Function
Next Program-Find the given number is even or odd using Function
-------------------------------------------------------------------------------------------*/
#include<stdio.h>
int EvenorAdd(int num);
int main()
{

    int a,b;

    printf("Enter Number to Test for Even or Odd\n");    

    scanf("%d",&a);
    
    b = EvenorAdd(a);
     
    if(b==1)
    {
    
        printf("Entered Number is Even Number");
    
    }

    else
    {
    
        printf("Entered Number is Odd Number");
    }


}

int EvenorAdd(int num)
{

  int flag;
 
  if(num%2==0)
  {
  
      flag=1;    
  
  }
 
  else
  {
  
      flag=0;
  }  

  return flag;

}


