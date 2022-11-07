/*Program No-P378.c
dt-11-7-2022
Concept-Structure with Typecast-Function Pointers
Concept-Typecast
Next Program-Display the Nth Record
-------------------------------------------------------------------------------------------------*/
#include<stdio.h>
typedef struct biodata
{

    char name[100];
    int age;
    float salary;

}Bio;

void read(FILE *fp,Bio *b);
void displaynthrecord(Bio *b);

int main(int argc, char *argv[])
{

Bio b;
FILE *fp;

    char ch[sizeof(struct biodata)];
    
    int nthrecord;
    int offset;
    
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
offset = (nthrecord-1)*sizeof(Bio);

fseek(fp,offset,0);



    displaynthrecord(&b);
  
    read(fp,&b);



fclose(fp);
}


void read(FILE *fp,Bio *b)
{
    int i;
    
    char *px;
    
    px=(char *)b;
    
        for(i=0;i<sizeof(Bio);i++,px++)
        {
            *px = getc(fp);
        
        }


}


void displaynthrecord(Bio *b)
{
    printf("\n%s\n%d\n%f",b->name,b->age,b->salary);
}




