/*Program No-p233.c
dt-12-23-2021
Concept-FileHandling
Next Program- Display the file line by line and display on the screen
-----------------------------------------------------------------------------------------------
Example:

In the Existing File we should have the text as like below

Take an Readch.txt

This is Mohanraj
This is Meera
This is Anand
-----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

 int i;
 
 char a[100];
 
 FILE *fp2;
 
 if(argc <2)
 {
 
    printf("Invalid Argument");
    return 0;
 }

fp2 = fopen(argv[1],"r");

if(fp2==NULL)
{
    printf("File Opening Error");
    return 0;
}


for(i=0;(a[i]=getc(fp2))!=EOF;i++)
{

    if(a[i]=='\n')
    {
   
        a[i]='\0';
       
        printf("\n%s",a);
       
        i=-1;
    }

}

fclose(fp2);

}


