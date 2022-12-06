/*Program No-P404.cpp
dt-12-5-2022
Language -C++
Concept-FunctionOverloading
Next Program-Sum of Two Numbers using FunctionOverLoading
------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

void read(int *a1,int *b1,int *c1);
void read(short *a2,short *b2, short *c2);
void read(float *a3,float *b3,float *c3);
void read(long *a4,long *b4,long *c4);
void read(double *a5,double *b5,double *c5);

int sum2(int a1,int b1,int c1);
short sum2(short a2,short b2,short c2);
float sum2(float a3,float b3,float c3);
long sum2(long a4,long b4,long c4);
double sum2(double a5,double b5,double c5);

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


read(&a1,&b1,&c1);
intsum2 =sum2(a1,b1,c1);
display(intsum2);


read(&a2,&b2,&c2);
shortsum2 =sum2(a2,b2,c2);
display(shortsum2);


read(&a3,&b3,&c3);
floatsum2=sum2(a3,b3,c3);
display(floatsum2);


read(&a4,&b4,&c4);
longsum2 =sum2(a4,b4,c4);
display(longsum2);


read(&a5,&b5,&c5);
doublesum2 =sum2(a5,b5,c5);
display(doublesum2);

}

void read(int *a1,int *b1,int *c1)
{
    cin>>*a1>>*b1>>*c1;

}

void read(short *a2,short *b2,short *c2)
{
    cin>>*a2>>*b2>>*c2;

}

void read(float *a3,float *b3,float *c3)
{
    cin>>*a3>>*b3>>*c3;

}

void read(long *a4,long *b4,long *c4)
{
    cin>>*a4>>*b4>>*c4;

}

void read(double *a5,double *b5,double *c5)
{
    cin>>*a5>>*b5>>*c5;

}

int sum2(int a1,int b1,int c1)
{
int s1,t1;
s1=a1>b1?a1:b1;
t1=s1>c1?s1:c1;
}

short sum2(short a2,short b2,short c2)
{
short s2,t2;
s2=a2>b2?a2:b2;
t2=s2>c2?s2:c2;
}

float sum2(float a3,float b3,float c3)
{
float s3,t3;
s3=a3>b3?a3:b3;
t3=s3>c3?s3:c3;
}

long sum2(long a4,long b4,long c4)
{

long s4,t4;
s4=a4>b4?a4:b4;
t4=s4>c4?s4:c4;

}
double sum2(double a5,double b5,double c5)
{
double s5,t5;
s5=a5>b5?a5:b5;
t5=s5>c5?s5:c5;
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





























