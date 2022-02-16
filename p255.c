/*Program No-p255.c
dt-2-13-2022
Concept-FileHandlingWithCommandLineArgument
Next Program-Find the Position of the given AccountNumber
----------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{

int i,number,flag,position;
int accountnumber;

FILE *fp;

if(argc<2)
{

    printf("Invalid Argument");
    return 0;

}

fp=fopen(argv[1],"r");

if(fp==NULL)
{

    printf("File Opening Error");
    return 0;

}

printf("------Enter Number to test if it is exist or not in the input file----\n");

scanf("%d",&number);

flag=0;

i=0;
while(feof(fp)==0)
{

    fscanf(fp,"%d",&accountnumber);
    
    
    if(accountnumber == number)
    {
        
        flag=1;
        position =i;
      
    }

i=i+1;

}

if(flag==1)
{
    
    printf("Entered number is exist in the file  & Posiition is = %d",position);
}
else
{

    printf("Emtered number did not exist in the file");
}

fclose(fp);
}
