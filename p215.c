/*program No-p215.c
dt-12-14-2021
Concept-File Handling
Next Program-Read bio-data from keyboard and write it to a file until n.name[0]!='$'
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
      
      fprintf(fp,"\n%s \n%d \n%f",b.name,b.age,b.salary);
      
      scanf("%s",b.name);
      
  
  
  }

fclose(fp);


}