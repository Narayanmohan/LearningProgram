/*Program No-P406.cpp
dt-12-7-2022
Concept-Template = Generics in[c# and Java]
Next Program-Biggest of 3 Numbers using Template in C++
----------------------------------------------------------------*/
#include<iostream>
using namespace std;
template<class T>
void read(T *a, T *b, T*c);
template<class T>
T big3(T a, T b, T c);
template<class T>
void display(T b3);

int main()
{

int a, b, c ,d;

read(&a,&b,&c);

d=big3(a,b,c);

display(d);

}

template<class T>
void read(T *a, T *b, T *c)
{
   
   cin>>*a>>*b>>*c;
    
}

template<class T>
T big3(T a, T b, T c)
{

    int k, l;
    
    k=a>b?a:b;
    
    l=k>c?k:c;
    
    return l;    

}

template<class T>
void display(T b3)
{
    cout<<"Biggest of 3 ="<<b3;
}