/*Program No- p153.c
dt-10-16-2021
Loop-For Loop
Concept- Array in For Loop
Next Program- Read 10 numbers and find the second biggest number in the given array 
-------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
int i,fbig,sbp,a[10],sp,fsmall,fbp,fsp,sbig;

for(i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}

fbig = a[0];
fsmall = a[0];



    for(i=0;i<10;i++)
    {

         if(fbig <a[i])
         {
 
             fbig = a[i];
             fbp = i;
        }
        

   }

printf("\nfirstbig = %d",fbig);


    for(i=0;i<10;i++)
    {

         if(fsmall >a[i])
         {
         
             fsmall = a[i];
             fsp = i;
         }   

    }


printf("\nfirstsmall + %d",fsmall);

sbig = fsmall;

for(i=0;i<10;i++)
{

    if(sbig <a[i] && a[i]!=fbig)
    {
    
        sbig = a[i];
        sbp = i;    
    }

}

printf("\nsecondbig = %d",sbig);


}
