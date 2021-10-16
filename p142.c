/*Program No- p142.c
dt-10-16-2021
Concept-For Loop
Next Program-Find the mean of Positive, Negative Numbers until -1000 is given
-----------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int cp,cn,sp,sn,avgpos,avgneg,num;



cp=0;
cn=0;
sp=0;
sn=0;
avgpos=0;
avgneg=0;




scanf("%d",&num);

for(; num!=-1000 ;)
{

    if(num>0)
    {
    
     cp= cp+1;
     sp = sp+num;
    }

    else if(num<0)
    {
    
    cn=cn+1;
    sn=sn+num;
    
    
    }
    else
    {
    printf("Not a valid No");
    }
    
scanf("%d",&num);   

}


avgpos = (sp/cp);
avgneg = (sn/cn);

printf("%d%d",avgpos,avgneg);



}