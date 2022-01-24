/*program No-p246.c
dt-1-23-2022
Concept-Union With File Handling
Next Program-Read biodata from keyboard and write in the file until $ is given using union and Command Line Argument
----------------------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc, char *argv[])
{
 
     int i;
     
     union Biodata
     {

         struct bio
         {
         
             char name[100];
             int age;
             float salary;
         
         
         }b;
         
         char ch[sizeof(struct bio)];
            
     
     };
     
     
     union Biodata m;
    
    FILE *fp;
    
    if(argc <2)
    {

        printf("Invalid Argument");
        return 0;
    
    }
    
   
   fp=fopen(argv[1],"w");
   
   if(fp==NULL)
   {
       
       printf("File Opening Error");
       return 0;
   
   } 
    

scanf("%s",m.b.name);


while(m.b.name[0]!='$')
{

    scanf("%d%f",&m.b.age,&m.b.salary);
    
    scanf("%s",m.b.name);

        
    for(i=0;i<sizeof(struct bio);i++)
    {
        putc(m.ch[i],fp);
    }


}
fclose(fp);


}
