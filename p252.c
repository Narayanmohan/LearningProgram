/*Program No-p252.c
dt-1-29-2022
Concept:Union
Concept-File Handling
Next Program-Edit the nth Record
-------------------------------------------------------------------------------------------------------------
Explanation and Logic:

   '  r+ ' mode means read and write
   1- Read the nth record and display on the screen
   2- Read from keyboard and write to file at 9th record position


When run the Query

- Use Manypay as a inputfile
- cc p252.c
- ./a.out Manypay
- Enter number 1 for to see the firstNthrecord.
- Read from Keyboard
- Once read from the keyboard to see the Modified file 
- ./a.out p250.c
- Now we can see the Edited File.
   
-------------------------------------------------------------------------------------------------------------*/  
#include<stdio.h>
int main(int argc, char *argv[])
{

   int i,nthrecord;
   int offset;
  
   
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

if(argc<2)
{

   printf("Invalid Argument");
   return 0;
}


fp = fopen(argv[1],"r+");

if(fp==NULL)
{
   
  printf("File Opening Error");
  return 0; 

}

scanf("%d",&nthrecord);

offset=(nthrecord-1)*sizeof(struct bio);

fseek(fp,offset,0);

for(i=0;i<sizeof(struct bio);i++)
{
   m.ch[i]=getc(fp);
}

printf("%s%d%f",m.b.name,m.b.age,m.b.salary);


scanf("%s%d%f",m.b.name,&m.b.age,&m.b.salary);


fseek(fp,offset,0);

for(i=0;i<sizeof(struct bio);i++)

{
 
 putc(m.ch[i],fp);
 
}

fclose(fp);

}





 
   


