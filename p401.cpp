/*Program No-P401.cpp
dt-11-30-2022
Language-c++
Next Program-Biggest of 3 Numbers using function
---------------------------------------------------------*/
#include<iostream>
using namespace std;
void read(int *a,int *b,int *c);
int  big3calculate(int a,int b,int c);
void printbig3(int c);
int main()
{

    int a,b,c,result,q;
    
    read(&a,&b,&c);
    
    result =big3calculate(a,b,c);
    
    printbig3(result);

} 

void read(int *a,int *b,int *c)
{

    cin>>*a>>*b>>*c;

}

int big3calculate(int a, int b,int c)
{
    int s,t;
    
    s=a>b?a:b;
    
    t=s>c?s:c;
    
    return t;

}

void printbig3(int c)
{

    cout<<"Biggest of 3 Number is ="<< c;

}