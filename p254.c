/*Program No-p254.c
dt-2-10-2022
Concept-FileHandling
Next Program-Find the given acount Number is available or not
-------------------------------------------------------------------------
Note- The below program works if we go for struture as well.

When execute the program pls follow the below steps.

1-cc p254.c
2-./a.out ac.txt
3-1 - < Enter value 1 as a input value.>
-------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
{

int i,j,Number,flag;

int accountnumber;

FILE *fp;

if(argc<2)
{
    printf("Invalid Argument");
    return 0;

}


fp= fopen(argv[1],"r");

if(fp==NULL)
{

    printf("File Opening Error");
    return 0;
}


printf("Enter Number to test if it is exist or not in the input File-------\n");

scanf("%d",&Number);

flag=0;

while(feof(fp)==0)
{

 fscanf(fp,"%d",&accountnumber);
 

 if(accountnumber==Number)
 {
  
 flag=1;
 
 }
 
}

if(flag==1)
{
 printf("Entered number exist in the file");
}
else
{
 printf("Entered number did not exist in the file");
}

fclose(fp);
}
