/*Program No- p231.c
dt-12-16-2021
Concept-CommandLineArgument
Concept-FileHandling with Char Array
NextProgram-Read a character from keyboard until '$' is given and write it to the file
----------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

int i;
char a[100];
FILE *fp2;

for(i=0;(a[i]=getchar())!='$';i++);

a[i]='\0';


if(argc < 2)
{

    printf("Invalid Argument");
    return 0;

}

fp2 = fopen(argv[1],"w");



if(fp2==NULL)
{
    printf("File Opening Error");
    return 0; 

}

for(i=0;a[i]!='\0';i++)
{

    putc(a[i],fp2);
    
}

fclose(fp2);





}