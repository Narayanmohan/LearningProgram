/*Program No-P404.cpp
dt-12-5-2022
Language -C++
Concept-FunctionOverloading
Next Program-Sum of Two Numbers using FunctionOverLoading
------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

void read(int *a1,int *b1);
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
void display(long longsum2);
void display(double doublesum2);

int main()
{

    int a1,b1,c1,intsum2;
    short a2,b2,c2,shortsum2;
    float a3,b3,c3,floatsum2;
    long a4,b4,c4,longsum2;
    double a5,b5,c5,doublesum2;


read(&a1,&b1);
intsum2 =sum2(a1,b1);
display(intsum2);


read(&a2,&b2);
shortsum2 =sum2(a2,b2);
display(shortsum2);


read(&a3,&b3);
floatsum2=sum2(a3,b3);
display(floatsum2);


read(&a4,&b4);
longsum2 =sum2(a4,b4);
display(longsum2);


read(&a5,&b5);
doublesum2 =sum2(a5,b5);
display(doublesum2);

}

void read(int *a1,int *b1)
{
    cin>>*a1>>*b1;

}

void read(short *a2,short *b2)
{
    cin>>*a2>>*b2;

}

void read(float *a3,float *b3)
{
    cin>>*a3>>*b3;

}

void read(long *a4,long *b4)
{
    cin>>*a4>>*b4;

}

void read(double *a5,double *b5)
{
    cin>>*a5>>*b5;

}

int sum2(int a1,int b1)
{
int c1;
c1=a1+b1;
return c1;

}

short sum2(short a2,short b2)
{
short c2;
c2=a2+b2;
return c2;

}

float sum2(float a3,float b3)
{
float c3;
c3=a3+b3;
return c3;

}

long sum2(long a4,long b4)
{

long c4;
c4=a4+b4;
return c4;
}
double sum2(double a5,double b5)
{
double c5;
c5=a5+b5;
return c5;

}

void display(int intsum2)
{
    cout<<"Sum of inttwo="<<intsum2;
}

void display(short shortsum2)
{
    cout<<"Sum of shorttwo="<<shortsum2;
}

void display(float floatsum2)
{
    cout<<"Sum of floattwo="<<floatsum2;
}

void display(long longsum2)
{
    cout<<"Sum of longtwo="<<longsum2;
}

void display(double doublesum2)
{
    cout<<"Sum of doubletwo="<<doublesum2;
}





























