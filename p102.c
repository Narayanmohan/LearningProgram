/*program No p102.c
dt 8-15-2021
Concept:Array
Next program: Read 10 numbers and Interchange the 2nd biggest Number and Second Smallest Numbers
-------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,fbig,sbig,fbp,sbp,fsmall,ssmall,fsp,ssp,a[10],swap;


i=0;
while(i<=9)
{
scanf("%d",&a[i]);
i++;
}
fbig=a[0];
i=0;
while(i<=9)
{

if(fbig<a[i])
{
fbig = a[i];
fbp =i;
i++;

}

else
{
i++;
}

}

fsmall = a[0];
i=0;
while(i<=9)
{
 if(fsmall >a[i])
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

sbig = fsmall;
i=0;
while(i<=9)
{

  if(sbig <a[i] && a[i]!=fbig)
  {
  
    sbp =i;
    i++;
  
  }
else
{
 i++;

}

}

ssmall= fbig;
i=0;
while(i<=9)
{
    if(ssmall >a[i] && a[i]!=fsmall)
    {
      ssmall = a[i];
      ssp=i;
      i++;
    
    }
    else
    {
        i++;
    
    }


}

swap = a[sbp];
a[sbp] = a[ssp];
a[ssp] = swap;

i=0;

while(i<=9)
{
 printf("%d",a[i]);
 
 i++;

}

}
