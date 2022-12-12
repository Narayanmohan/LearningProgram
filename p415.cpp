/*Program No-P415.cpp
dt-12-12-2022
Concept-Typedef with Return Type as Typedef Keyword
Next Program-Biggest of 3 numbers using typedef with Return Type-big3
----------------------------------------------------------------------------------*/
#include<iostream>
using namespace std;

typedef struct bigof3num 
{

  int a, b,c,t, bigger3;
 
}big3;

big3 read(big3 *b3);

big3 calculate(big3 *b3);

big3 display(big3 *b3);

int main()
{

 big3 b3;
 
   read(&b3);
   
   calculate(&b3);
   
   display(&b3);

}

big3 read(big3 *b3)
{

  cin>>b3->a>>b3->b>>b3->c;
 
}


big3 calculate(big3 *b3)
{
  
  b3->t = b3->a > b3->b ? b3->a :b3->b;
  
  b3->bigger3 = b3->t > b3->c?b3->t:b3->c;  

}

big3 display(big3 *b3)
{
 
  cout<<"Biggest of 3 Number is ="<<b3->bigger3;

}









