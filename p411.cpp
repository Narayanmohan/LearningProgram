/*Program No-P411.cpp
dt-12-10-2022
Concept-Default Arguments
Concept-Pass By Value.
Next Program-Smallest of 3 Numbers using Default Arguments
-----------------------------------------------------------------------------------------------
Note:

    How Pass by Value works
    
        -User Entered value as 1000 for a, 2000 for b,3000 for variable c
        -When function call "result = small3(c,a,b)" user provides the parameter in this order
        -In the Actual function c value goes to int a, a value goes to int b, b value goes to int c
        

so it should print 3000 1000 2000 for the very first funtion call.

The next function call "result = small3(c)" -> value for c 3000 should go to parameter int a,

and from the default paramters int b=2 goes to int b in the function int b and  from the

default parameters int c=3 goes to in the function int c

so , it should print 3000,2,3

------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

int small3(int a=1,int b=2, int c=3);

int main()
{
    int a,b,c, result;
    
    cin>>a>>b>>c; //1000,2000,3000;
    
            //result = small3(a,b,c); // ordinary way of printing small3
        
                    //  cout<<"Smallest of 3 using normal way="<<result;
        
      
        
        result = small3(c,a,b); //3000,1000,2000
                 
        result = small3(c);     // 3000 

        
        cout<<"Smallest of 3 using Default Arguments ="<<result;            

}


int small3(int a, int b, int c)
{

    int s,t;
 
        cout<<a<<b<<c<<'\n';   //3000 2 3
           
        s=a<b?a:b;

        t=s<c?s:c;
        
        return t;       

}
