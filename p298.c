/*Program No p298.c
dt-7-7-2022
Concept-Function with File Handling
Next Program-Read character from keyboard and Write it to the File
------------------------------------------------------------------------------------*/
#include<stdio.h>
void writeToFile(FILE *fp);


int main(int argc, char *argv[])
{

FILE *fp;

if(argc<2)
{
    
    printf("Invalid Argument");
    return 0;

}

fp = fopen(argv[1],"w");

if(fp==NULL)
{
    printf("File Open Error");
    return 0;
}


writeToFile(fp);

fclose(fp);

}

void writeToFile(FILE *fp)
{

char ch;

for(;(ch=getchar())!='$';)
{

    putc(ch,fp);
}


}

