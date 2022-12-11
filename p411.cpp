/*Program No-P411.cpp
dt-12-10-2022
Concept-Default Arguments
Concept-Pass By Value.
Next Program-Smallest of 3 Numbers using Default Arguments
----------------------------------------------------------------*/
#include<iostream>
using namespace std;

int small3(int a=1,int b=2, int c=3);

int main()
{
    int a,b,c, result;
    
    cin>>a>>b>>c; //1000,2000,3000;
    
        result = small3(a,b,c); // ordindary way of printing small3
        
          //  cout<<"Smallest of 3 using normal way="<<result;
        
         
        
        result = small3(c,a,b);
        
        
        result = small3(c);     // 3000

        

           // cout<<"Smallest of 3 using Default Arguments ="<<result; 

}


int small3(int a, int b, int c)
{

    int s,t;
 
    cout<<a<<b<<c<<'\n';   //3000 2 3
 
           
    s=a<b?a:b;

    t=s<c?s:c;
        
        return t;


}
