/*Program No p100.c
dt: 8-14-2021
CONCEPT: ARRAY
Next Program:Read 10 Numbers and  Interchange Position of biggest and Position of smallest Numbers:
---------------------------------------------------------------------------------------------------
Example:


a=>       |1|2|3|4|5|6|7|8|
Position: |0|1|2|3|4|5|6|7|   

Output:

b=>       |8|2|3|4|5|6|7|1|

------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,big, small,swap,ps,pb,a[9];

big=0;
swap=0;
small=0;
ps=0;
pb=0;


small=a[0];

i=0;

while(i<=9)
{
    scanf("%d",&a[i]);
    i++;
}

small=0;
i=0;
while(i<=9)
{
    if(small>a[i])
    {
    
    small = a[i];
    ps=i;
    i++;  
    }
    else
    {
     i++;
    }


}
i=0;

big = a[0];

while(i<=9)
{
  if(big<a[i])
  {
  
   big = a[i];
   pb=i;
   i++;
  
  }
  else
  {
      i++;
  }

  swap = a[pb];
  a[pb] = a[ps];
  a[ps] = swap;

}

i=0;

while(i<=9)
{
    printf("%d",a[i]);
    i++;

}


}



