/*Program No-p101.c
dt 8-15-2021
Concept: Array
Next Program: Read 10 numbers and find the second biggest Numbers
------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,fbig,sbp,a[10],sp, fsmall,fbp,fsp,sbig;

i=0;
while(i<=9)
{
scanf("%d",&a[i]);

i++;

}
fbig =a[0];
i=0;
while(i<=9)
{
  if(fbig <a[i])
  {
 
  fbig=a[i];
  fbp =i;
  i++;
  }

  else
  {
  
  i++;

  }

}
printf("Firstbig = %d",fbig);


fsmall =a[0];

i=0;
while(i<=9)
{
 if(fsmall>a[i])
 {
  fsmall = a[i];
  fsp=i;
  i++;
  
 }
 else
 {
  i++;
 }

}
printf("First Small = %d", fsmall);

sbig = fsmall;
i=0;

while(i<=9)
{
 
 if(sbig<a[i] && a[i]!=fbig)
 {
 
  sbig = a[i];
  sbp =i;
  i++;
 }
 else
 {

 i++;
 }
 
}

printf("Second big= %d",sbig);

}