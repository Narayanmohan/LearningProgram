/*Program No-p250.c
dt-1-27-2022
New Function : Fseek(fp,offset,0)
Concept-Union with Struture & File Handling
Next Program-Display the nth record using random access file
---------------------------------------------------------------------------------------------------------
Explanation:

Union biodata
  {
  
    struct bio
    {
    
      char   name[100]; //100 bytes
      int    age;      // 4 bytes
      float  salary   //  8 bytes
     
    }b;
  
   char ch[sizeof(struct bio)]; \\ char ch[112] ie[100+4+8]
  
  
  }


1st Record - Starting Position: 0-112[ie 112 end position]

2nd Record - 113 -225(113+112)

3rd Record - Starting Position is 226 -338(Ending Position)


fp=fopen(argv[1],"r")

fp=0(Address)

nthrecord = 1; //scanf

(nth record -1)*sizeof(Struct bio);

(1-1)*sizeof(struct bio);

0 * 112


Syntax: fseek(fp,offset,Position)

offset = (n-1)*sizeof(struct bio);

fseek(fp,offset,0);


then the below for loop reads one record by record

for(i=0;i<sizeof(struct bio);i++)
{
  m.ch[i] = getc(fp);

}

---------------------------------------------------------------------------------------------------------*/
#include<stdio.h>
int main(int argc,char *argv[])
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


  fp=fopen(argv[1],"r");
  
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

fclose(fp);
}






