/*Program No-p173.c
dt-11-8-2021
Concept-Char Array
Loop-For Loop
Next Program-Count the number of upper case, lowercase,single digit or special character until '$' is given
------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i,uc,lc,sc,sd;
char a[100];

uc=0;
lc=0;
sc=0;
sd=0;


for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


for(i=0;a[i];i++)

{
    if(a[i]>=65 && a[i]<=90)
    {
    
        uc=uc+1;
        
    }

    else if(a[i]>=97 && a[i]<=122)
    {
    
        lc=lc+1;
    
    }
    else if(a[i]>=48 && a[i]<=57)
    {
    
        sd=sd+1;

    }
    else
    {
    
        sc=sc+1;
    
    }

}    
    printf("UpperCase = %d Lowercase= %d digit= %d specialCharacter= %d",uc,lc,sd,sc);

}












