/*Program No-p259.c
dt-2-20-2022
Concept-Function
Next Program-Find the sum of two numbers using Function
------------------------------------------------------------------------------------
Function Explanation :
    Syntax:
        Return Type/Void FunctionName (Parameter1, Paramter2)
        
        int Parameter1;
        int Parameter1;
        char Paramater3;
        {
        
            //Function Body
            return value                
        }
        
        value 3= FuntionName(value1,value2...)
        
------------------------------------------------------------------------------------

main()
int firstnumber, secondnumber,s;

scanf("%d%d",&firstnumber,&secondnumber);

s=sumoftwonumbers(firstnumber,secondnumber);

printf("%d",s);



int sumoftwonumbers(a,b)
int a;
int b;

{
    int sum;
    sum=a+b;
    return sum;
}
------------------------------------------------------------------------------------*/        
#include<stdio.h>
int main()
{

    int firstnumber,secondnumber,s;
    
    scanf("%d%d",&firstnumber,&secondnumber);


    //Call Function
    s = sumoftwonumbers(firstnumber,secondnumber);



    printf("%d",s);


}


int sumoftwonumbers(a,b)
int a;
int b;
{
    int sum;
    sum = a+b;
    return sum;

}

