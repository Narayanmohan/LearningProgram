/*program No-p215.c
dt-12-14-2021
Concept-File Handling
Next Program-Read bio-data from keyboard and write it to a file until n.name[0]!='$'
---------------------------------------------------------------------------------------------
Note:

  1-String is nothing but the array of characters 
  2-Here we are checking the first character in the array is zero and if it is zero program
  never executes or never go inside the while Loop.

---------------------------------------------------------------------------------------------*/
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

fp=fopen("Bio1.txt","w");


    if(fp==NULL)
    {
    
        printf("File Opening Error");
        return 0;
    
    }

  scanf("%s",b.name);
  
  while(b.name[0]!='$')
  {
  
      scanf("%d%f",&b.age,&b.salary);
      
      fprintf(fp,"%s\n%d\n%f\n",b.name,b.age,b.salary);
      
      scanf("%s",b.name);
      
  
  
  }

fclose(fp);


}