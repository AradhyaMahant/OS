#include<stdio.h>
#include<conio.h>

int main()
{
	//creating a file
	FILE *fp1=fopen("D:\\upes\\2nd year\\OS\\lab\\NewTextDocument.txt","r");
	//reading a file
	char ch;
	ch=getc(fp1);
	while(ch!=EOF)
	{
		printf("%c",ch);
		ch=getc(fp1);
	}
	fclose(fp1);
	//writing in a file
	char name[10],ch1;
    FILE *fp2=fopen("D:\\upes\\2nd year\\OS\\lab\\NewTextDocument.txt","w");
	do{
		printf("enter name of other good browsers ");
		scanf("%s /t",&name);
		fprintf(fp2,"NAME=%s \t",name);
		
		puts("give more names?Y or N");
		ch1=getch();
	}while(ch1=='y'or ch1=='Y');
	
	puts("values inserted");
	fclose(fp2);
    //deleting a file
    int d=remove("D:\\upes\\2nd year\\OS\\lab\\NewTextDocument.txt");
   if ( d == 0) 
      printf("Deleted successfully"); 
   else
      printf("Unable to delete"); 
  
   return 0; 
} 

