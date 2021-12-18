/*Program No-p232.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-File Handling
Concept-Using CharArray
Next Program- Read characters from  File Until EOF and Displya on the screen using char array.
------------------------------------------------------------------------------------------------------
Note:

 putchar function can be used for to display on the screen.

------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

 int i;
 char a[100];
 FILE *fp2;


if(argc< 2)
{

 printf("invaild Argument");
 return 0;

}


fp2 = fopen(argv[1],"r");

if(fp2==NULL)
{

 printf("File Opening Error");
 return 0;

}



for(i=0;(a[i]=getc(fp2))!=EOF;i++);

a[i]='\0';




for(i=0; a[i]!='\0';i++)
{

 putchar(a[i]);

}

fclose(fp2);

}
 
 
