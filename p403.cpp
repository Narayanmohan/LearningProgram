/*Program No-P403.cpp
dt-12-4-2022
Concept-Function-Overloading
Language-c++
Next Program-Biggest of 3 Numbers using Function Overloading-c++
----------------------------------------------------------------------------*/
#include<iostream>
using namespace std;
void read(int *a1,int *b1,int *c1);
void read(short *a2,short *b2,short *c2);
void read(float *a3,float *b3,float *c3);
void read(long *a4,long *b4,long *c4);
void read(double *a5,double *b5,double *c5);


int big3(int a1,int b1,int c2);
short big3(short a2,short b2,short c2);
float big3(float a3,float b3,float c3);
long big3(long a4,long b4,long c4);
double big3(double a5,double b5,double c5);

void display(int d1);
void display(short d2);
void display(float d3);
void display(long d4);
void display(double d5);

int main()
{

    int a1,b1,c1,intbig;
    short a2,b2,c2,shortbig;
    float a3,b3,c3,floatbig;
    long a4,b4,c4,longbig;
    double a5,b5,c5,doublebig;    
        
    
        read(&a1,&b1,&c1);
        intbig = big3(a1,b1,c1);
        display(intbig);
        
        
        read(&a2,&b2,&c2);
        shortbig = big3(a2,b2,c2);
        display(shortbig);
        
        
        read(&a3,&b3,&c3);
        floatbig = big3(a3,b3,c3);
        display(floatbig);
        
        
        read(&a4,&b4,&c4);
        longbig = big3(a4,b4,c4);
        display(longbig);
        
        
        read(&a5,&b5,&c5);
        doublebig=big3(a5,b5,c5);
        display(doublebig);       

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


int big3(int a1,int b1,int c1)
{
    int s1,t1;
        
    s1=a1>b1?a1:b1;
    t1=s1>c1?s1:c1;
   
    return t1;
    
}

short big3(short a2,short b2,short c2)
{
    int s2,t2;

    s2=a2>b2?a2:b2;
    t2=s2>c2?s2:c2;

    return t2;

}

float big3(float a3,float b3,float c3)
{
    int s3,t3;

    s3=a3>b3?a3:b3;
    t3=s3>c3?s3:c3;

    return t3;

}

long big3(long a4,long b4,long c4)
{
    int s4,t4;

    s4=a4>b4?a4:b4;
    t4=s4>c4?s4:c4;

    return t4;

}

double big3(double a5,double b5,double c5)
{
    int s5,t5;

    s5=a5>b5?a5:b5;
    t5=s5>c5?s5:c5;

    return t5;

}

void display(int d1)
{
    cout<<"Biggest of 3 for intbig ="<<d1;
}


void display(short d2)
{
    cout<<"Biggest of 3 for shortbig ="<<d2;
}

void display(float d3)
{
    cout<<"Biggest of 3 for floatbig ="<<d3;
}

void display(long d4)
{
    cout<<"Biggest of 3 for longbig ="<<d4;
}

void display(double d5)
{
    cout<<"Biggest of 3 for doublebig ="<<d5;
}












