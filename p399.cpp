/*Program No-P399.cpp
dt-11-29-2022
Language-c++
Next Program-Read sum of two numbers using Function with pointer
----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
void read(int *a,int *b);
int sum(int a ,int b);
void print(int p);
main()
{
    
    int a, b,q,result;
    
    read(&a,&b);
    
    result=sum(a,b);
    
    print(result);


}
void read(int *a, int *b)
{

    cin>>*a>>*b;
}

int sum(int a, int b)
{

    int s;
    
    s=a+b;
    
    return s;

}
void print(int p)
{

    cout<<"Sum of Two Number ="<<p;  

}


