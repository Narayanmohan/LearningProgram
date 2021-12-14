/*Program No-p213.c
Concept-File Handling
dt-12-13-2021
Next Program-Read biodata from keyboard and Write it to a file
----------------------------------------------------------------------------------------
Explanation:

1-Declaring File Pointer
2-Initialize The File Pointer
3-Check whether is the file is exist or not & check for any Error
4-Write the content into the file
5-File Close

*fp -> Pointer Variable


Notes:

 -fprintf - file Write
 -fscanf  - Read From File
 -Putc - Will display on the Console
 


---------------------------------------------------------------------------------------*/
#include<stdio.h>
int main()
{
    
    
    typedef struct biodata
    {
    char name[100];
    int age;
    float salary;

    }Bio;

Bio b;

FILE *fp;

fp = fopen("Bio1.txt","w");


if(fp==NULL)

{
    printf("File Opening Error");
    return 0;
}


scanf("%s%d%f",b.name,&b.age,&b.salary);

fprintf(fp,"\n%s \n%d \n%f",b.name,b.age,b.salary);

fclose(fp);


}

