/*Program No-p172.c
dt-10-31-2021
Loop-For Loop
Concept-Char Array
Next Program-Classify the given character is uppercase,lowercase and single digit or special character until '$' is given
-------------------------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{

int i;
char a[100];


for(i=0;(a[i]=getchar())!='$';i++);



a[i]='\0';


for(i=0;a[i];i++)
{

    if(a[i]>=65 && a[i]<=90)
    {

        printf("Uppercase= %c",a[i]);
        
    }
    else if(a[i]>=97 && a[i]<=122)
    {
        
        printf("Lowercase= %c",a[i]);
        
    }
    else if(a[i]>=48 && a[i]<=57)
    {
        printf("digit = %c",a[i]);
    
    }
    else
    {
        printf("special characters=%c",a[i]);
    
    }

}


}

