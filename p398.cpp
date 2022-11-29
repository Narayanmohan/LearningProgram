/*Program No-P398.cpp
dt-11-29-2022
Language-C++
Next Program-Biggest of 3 Numbers using c++ with Ternary operators
-------------------------------------------------------------------
g++ p398.cpp

./a.out p398.cpp

-------------------------------------------------------------------*/
#include<iostream>
using namespace std;
main()
{
    int a,b,c,t,big3;
    
    cin>>a>>b>>c;
    
        t=a>b?a:b;
        
        big3 = t>c?t:c;
        
            cout<<"Biggest of 3 Number ="<<big3;





}