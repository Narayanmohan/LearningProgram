/*Program No-P409.cpp
dt-12-6-2022
New Concept-Default Arguments
Next Program-Sum of Two Numbers using default Arguments
------------------------------------------------------------------------------------------------------------
Default Arguments
    
    Defintions:
    
        A default argument is a value provided in a function declaration that is automatically assigned by
the compiler if the calling function doesn’t provide a value for the argument.
In case any value is passed, the default value is overridden.
-----------------------------------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

int sum(int a=7,int b=70);

int main()
{

    int a,b,c;
    
        cin>>a>>b; //7,70
        c=sum(a,b);//7
        

        cout<<"\n"<<"Sum of two Numbers in ordinary way = "<<c;


        cout<<"\n"<< "Using Default Arguments sum value below"; 
                
        c=sum(a); //Here default parameter works ie if user did not pass the b parameter it takes the value for b from default Parameters          
            
                               
                cout<<"\n"<<"Sum of two Numbers using Default Arguments without passing the Parameter b ="<<c;
        
}

int sum(int a, int b)
{
    int result;
    result = a+b;
    
        return result;

}        
        
        
        







