/*Program No-P410.cpp
dt-12-9-2022
Concept-Default Arguments
Next Program-Biggest of 3 Numbers using Default Arguments
------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

int big3(int a=7,int b=11, int c=17);

int main()
{

  int a, b, c, result;
  
    cin>>a>>b>>c; // 1 2 3
    
      result = big3(a,b,c);
      
          cout<<'\n'<<"Biggest of 3 numbers using ordinary way = "<<result;
      

      result= big3(a);// using Default Arguments
      
          cout<<'\n'<<"Biggest of 3 numbers using Default Arguments-The above statement has only one parameter the remaining two parameter values are coming from default Arguments = "<<result;
      
       
      
      
}

int big3(int a, int b, int c)
{

    int s,t;
    
    s=a>b?a:b;
    
    t=s>c?s:c;
    
      return t;
    



}  