/*Program No-P402.cpp
dt-12-2-2022
Language-C++
Next Program-Biggest of 3 Numbers using different datatypes Altogether
----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

void intread(int *a, int *b, int *c);
int intcalculate(int a,int b, int c);
void intprintbig3(int c);

void longread(long *a1,long *b1,long *c1);
long longcalculate(long a1,long b1,long c1);
void longprintbig3(long c1);

void shortread(short *a2, short *b2, short *c2);
short shortcalculate(short a2, short b2, short c2);
void shortprintbig3(short c2);

void floatread(float *a3, float *b3, float *c3);
float floatcalculate(float a3,float b3,float c3);
void floatprintbig3(float c3);

void doubleread(double *a4,double *b4,double *c4);
double doublecalculate(double a4,double b4,double c4);
void doubleprintbi3(double c4);


int main()
{

 int a,b,c,result,q;
 long a1,b1,c1,result1,q1;
 short a2,b2,c2,result2,q2;
 float a3,b3,c3,result3,q3;
 double a4,b4,c4,result4,q4;
 

  intread(&a,&b,&c);
  longread(&a1,&b1,&c1);
  shortread(&a2,&b2,&c2);
  floatread(&a3,&b3,&c3);
  doubleread(&a4,&b4,&c4);

 
 
 result =intcalculate(a,b,c);
 result1 =longcalculate(a1,b1,c1);
 result2 =shortcalculate(a2,b2,c2);
 result3 =floatcalculate(a3,b3,c3);
 result4 =doublecalculate(a4,b4,c4);   


intprintbig3(result);
longprintbig3(result1);
shortprintbig3(result2);
floatprintbig3(result3);
doubleprintbi3(result4);
 

}
               
void intread(int *a,int *b, int *c)
{

 cin>>*a>>*b>>*c;

}                                 

void longread(long *a1,long *b1,long *c1)
{
 cin>>*a1>>*b1>>*c1;

}

void shortread(short *a2,short *b2,short *c2)
{

 cin>>*a2>>*b2>>*c2;
  
}

void floatread(float *a3,float *b3,float *c3)
{

 cin>>*a3>>*b3>>*c3;

}

void doubleread(double *a4,double *b4, double *c4)
{

 cin>>*a4>>*b4>>*c4;
   
}

int intcalculate(int a,int b,int c)
{

 int s,t;
 s=a>b?a:b;
 t=s>c?s:c;
 
 return t;
 
}


long longcalculate(long a1,long b1,long c1)
{
 
long s1,t1;
s1=a1>b1?a1:b1;
t1=s1>c1?s1:c1;

return t1; 
 
}
short shortcalculate(short a2,short b2,short c2)
{
 
short s2,t2;
s2=a2>b2?a2:b2;
t2=s2>c2?s2:c2;
return t2;

}

float floatcalculate(float a3,float b3,float c3)
{

float s3,t3;
s3=a3>b3?a3:b3;
t3=s3>c3?s3:c3;
return t3;

}

double doublecalculate(double a4,double b4,double c4)
{

double s4,t4;
s4=a4>b4?a4:b4;
t4=s4>c4?s4:c4;
return t4;

}
 
void intprintbig3(int c)
{

   cout<<"Biggest of int-printbig3="<<c;

}

void longprintbig3(long c1)
{

   cout<<"Biggest of Long-printbig3="<<c1;
   
}

void shortprintbig3(short c2)
{

  cout<<"Biggest of Short-printbig3="<<c2;

}

void floatprintbig3(float c3)
{

  cout<<"Biggest of Float-printbig3="<<c3;

}

void doubleprintbi3(double c4)
{

  cout<<"Biggest of int-printbig3="<<c4;

}
 