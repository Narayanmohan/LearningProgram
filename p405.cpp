/*Program No-p405.cpp
dt-12-7-2022
New Concept-Template = Generics[in c# and Java]
Next Program-Sum of two numbers using template
------------------------------------------------------------------------ 
Note:

In Function Overloading Function Name will be remain same and 
it has one or more same parameters or different parameters.

for Example
oid read(int *a1,int *b1);
void read(short *a2,short *b2);
void read(float *a3,float *b3);
void read(long *a4,long *b4);
void read(double *a5,double *b5);

int sum2(int a1,int b1);
short sum2(short a2,short b2);
float sum2(float a3,float b3);
long sum2(long a4,long b4);
double sum2(double a5,double b5);

void display(int intsum2);
void display(short shortsum2);
void display(float floatsum2);


In Function Overloading we create several methods with the same name 
and for different datatype. Template came to pictures to avoid creating
same methods many time.
------------------------------------------------------------------------*/ 
#include<iostream>
using namespace std;

template<class T>
void read(T *a, T *b);

template<class T>
T sum2(T a, T b);

template<class T>
void display(T Stwo);

int main()
{

    int a,b,s;
    
    read(&a,&b);
    
    s=sum2(a,b);
    
    display(s);



}
template<class T>
void read(T *a, T *b)
{

    cin>>*a>>*b;
}

template<class T>
T sum2(T a, T b)
{

    int L;
    
    L=(a + b);
    
    return L;

}

template<class T>
void display(T stwo)
{

    cout<<"Sum of Two Numbers = "<<stwo;

}






























