#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE*All;
FILE*sc;
FILE*IT;
FILE*ECO;
FILE*NOV;
FILE*KID;
FILE*Rel;
struct book 
{
	int Book_ID,choice;
	char Book_name[20],Book_Pubisher[20],Book_Author[20];
};
//struct book rel;
//struct book it;
//struct book eco;
struct book Books;
//struct book nov;
//struct book kid;
char id[10];
int choice;
void addnewbooks();
void viewbooks();
void searchbook();
void removebook();
void exit();

int main(int argc, char *argv[]) {
	
	printf("\t********* Welcome In Library management system ****************** \n\n");

	
	
	printf("\t##################### MAIN MENU ###############\n\n");
	printf(" 1. Add a New Book\n");
    printf(" 2. View All Books \n");
    printf(" 3. Search For a Book\n");
    printf(" 4. Remove a Book\n");
    printf(" 5. Exit\n\n");
    printf("Enter Your choice........");
    printf(" \n \n");
    scanf("%d",&choice);
    if (choice==1)
    {
    	addnewbooks();
	}
	else if(choice==2)
	{
		viewbooks();
	}
    
	return 0;
}

void addnewbooks()
{
	printf("******* Welcome To Registration Services ********\n");
	printf("======= MAIN MENU =======\n\n");
 	
	printf(" 1. BOOKS\n");
    printf(" 2. NOVELS \n");
    printf(" 3. BOOK For KIDS \n");
    printf(" 5. Exit\n\n");
    printf("Enter Your choice........");
    
    scanf("%d",&choice);
    
   
    
    
if (choice==1)
{    
    printf(" 1. Science Books  \n");
	printf(" 2. Economics & Business \n");
    printf(" 3. Computer Science \n");
    printf(" 4. Religion & Ethics  \n");
    printf(" 5. Exit\n\n");
    printf("Enter Your choice........");
    
    scanf("%d",&choice);
    if(choice==1)
    {
    	
	printf(" !!!!!! Welcome In Science Books  !!!!!!\n\n");
    	
    printf(" Book ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Book : \n");
    scanf("%s",&Books.Book_name);
    printf(" Book Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Book Author : \n");
    scanf("%s",&Books.Book_Author);
    
   // File 
   
    sc=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Science_Books.txt","a");
    fputs(itoa(Books.Book_ID,id,10),sc);
    fputs("\t",sc);
    fputs(Books.Book_name,sc);
    fputs("\t",sc);
    fputs(Books.Book_Pubisher,sc);
    fputs("\t",sc);
    fputs(Books.Book_Author,sc);
    fputs("\n",sc);
    
    fclose(sc);
    
	}
	
	else if(choice==2)
	{
	printf(" !!!!!! Welcome In Economics & Business Books  !!!!!!\n\n");
	
	printf(" Book ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Book : \n");
    scanf("%s",&Books.Book_name);
    printf(" Book Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Book Author : \n");
    scanf("%s",&Books.Book_Author);
    
    //File
    
    ECO=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Economics & Business Books.txt","a");
    fputs(itoa(Books.Book_ID,id,10),ECO);
    fputs("\t",ECO);
    fputs(Books.Book_name,ECO);
    fputs("\t",ECO);
    fputs(Books.Book_Pubisher,ECO);
    fputs("\t",ECO);
    fputs(Books.Book_Author,ECO);
    fputs("\n",ECO);
    
    fclose(ECO);
    
	}
	else if(choice==3)
	{
	printf(" !!!!!! Welcome In  Computer Science Books  !!!!!!\n\n");
	
	printf(" Book ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Book : \n");
    scanf("%s",&Books.Book_name);
    printf(" Book Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Book Author : \n");
    scanf("%s",&Books.Book_Author);
    
    //File
    
    IT=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Computer Science Books.txt","a");
    fputs(itoa(Books.Book_ID,id,10),IT);
    fputs("\t",IT);
    fputs(Books.Book_name,IT);
    fputs("\t",IT);
    fputs(Books.Book_Pubisher,IT);
    fputs("\t",IT);
    fputs(Books.Book_Author,IT);
    fputs("\n",IT);
    
    fclose(IT);
    
    
	}
	
	else if(choice==4)
	{
	printf(" !!!!!! Welcome In  Religion & Ethics  !!!!!!\n\n");
	
    printf(" Book ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Book : \n");
    scanf("%s",&Books.Book_name);
    printf(" Book Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Book Author : \n");
    scanf("%s",&Books.Book_Author);
    
   
    //File
    
    Rel=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Religion & Ethics.txt","a");
    fputs(itoa(Books.Book_ID,id,10),Rel);
    fputs("\t",Rel);
    fputs(Books.Book_name,Rel);
    fputs("\t",Rel);
    fputs(Books.Book_Pubisher,Rel);
    fputs("\t",Rel);
    fputs(Books.Book_Author,Rel);
    fputs("\n",Rel);
    
    fclose(Rel);
    
    
	}
	
	All=fopen("C:/Users/PRINCE/Desktop/Library management System Database/All Books.txt","a");
	fputs(itoa(Books.Book_ID,id,10),All);
	fputs("\t",All);
	fputs(Books.Book_name,All);
	fputs("\t",All);
	fputs(Books.Book_Pubisher,All);
	fputs("\t",All);
	fputs(Books.Book_Author,All);
	fputs("\n",All);
	
	fclose (All);
	
	
}
	
else if(choice==2)
	{
	printf(" !!!!!! Welcome In Novels !!!!!!\n\n");
		
	printf(" Novel ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Novel : \n");
    scanf("%s",&Books.Book_name);
    printf(" Novel Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Novel Author : \n");
    scanf("%s",&Books.Book_Author);
		
		//File
		
		NOV=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Novels.txt","a");
		fputs(itoa(Books.Book_ID,id,10),NOV);
		fputs("\t",NOV);
		fputs(Books.Book_name,NOV);
		fputs("\t",NOV);
		fputs(Books.Book_Pubisher,NOV);
		fputs("\t",NOV);
		fputs(Books.Book_Author,NOV);
		fputs("\n",NOV);
		
		fclose (NOV);
		
	All=fopen("C:/Users/PRINCE/Desktop/Library management System Database/All Books.txt","a");
	fputs(itoa(Books.Book_ID,id,10),All);
	fputs("\t",All);
	fputs(Books.Book_name,All);
	fputs("\t",All);
	fputs(Books.Book_Pubisher,All);
	fputs("\t",All);
	fputs(Books.Book_Author,All);
	fputs("\n",All);
		
	}
  
	else if(choice==3)
	{
	printf(" !!!!!! Welcome In Kids Book !!!!!!\n\n");
		
	printf(" Book ID : \n");
	scanf("%d",&Books.Book_ID);
    printf(" Name Of Book : \n");
    scanf("%s",&Books.Book_name);
    printf(" Book Publisher : \n");
    scanf("%s",&Books.Book_Pubisher);
    printf(" Book Author : \n");
    scanf("%s",&Books.Book_Author);
		
		//File
		
		KID=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Kids Book.txt","a");
		fputs(itoa(Books.Book_ID,id,10),KID);
		fputs("\t",KID);
		fputs(Books.Book_name,KID);
		fputs("\t",KID);
		fputs(Books.Book_Pubisher,KID);
		fputs("\t",KID);
		fputs(Books.Book_Author,KID);
		fputs("\n",KID);
		
		fclose (KID);
		
	All=fopen("C:/Users/PRINCE/Desktop/Library management System Database/C:/Users/PRINCE/Desktop/All Books.txt","a");
	fputs(itoa(Books.Book_ID,id,10),All);
	fputs("\t",All);
	fputs(Books.Book_name,All);
	fputs("\t",All);
	fputs(Books.Book_Pubisher,All);
    fputs("\t",All);
	fputs(Books.Book_Author,All);
	fputs("\n",All);
	
	
	}
};
void viewbooks()
{

char p;
	
printf("******* Welcome In Store Of Books ********\n");
printf("======= MAIN MENU =======\n\n");

    printf(" 1. View All Books\n");
    printf(" 2. View Science Books  \n");
    printf(" 3. View Economics & BusinessScience Books  \n");
    printf(" 4. View Computer Science Books \n");
    printf(" 5. View Religion & Ethics Books \n");
    printf(" 6. View NOVELS \n");
    printf(" 7. View BOOK For KIDS \n");
    printf(" 8. Exit\n");
    printf("Enter Your choice........");
    
	scanf("%d",&choice);	
    		
    if(choice==1)
	{
	All=fopen("C:/Users/PRINCE/Desktop/Library management System Database/All Books.txt","r");	
	
	while((p=fgetc(All))!=EOF)
	printf("%c",p);	
	
	fclose(All)	;
	}		
	else if(choice==2)
	{
	sc=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Science_Books.txt","r");
	while ((p=fgetc(sc))!=EOF)
	printf("%c",p);
	}
	
	else if(choice==3)
	{
	ECO=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Economics & Business Books.txt","r");	
	while ((p=fgetc(ECO))!=EOF)
	printf("%c",p);
	}
	
	else if(choice==4)
	{
		IT=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Computer Science Books.txt","r");
		while ((p=fgetc(IT))!=EOF)
	    printf("%c",p);
	}
	else if(choice==5)
	{
		Rel=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Religion & Ethics.txt","r");
		while ((p=fgetc(Rel))!=EOF)
	    printf("%c",p);
	}
	else if(choice==6)
	{
		NOV=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Novels.txt","r");
		while ((p=fgetc(NOV))!=EOF)
	    printf("%c",p);
	}
	else if(choice==7)
	{
	KID=fopen("C:/Users/PRINCE/Desktop/Library management System Database/Kids Book.txt","r");	
	while ((p=fgetc(KID))!=EOF)
	    printf("%c",p);
	}
	else{
		printf("INVALID");
	}
};
void searchbook()
{
	
};
void removebook()
{
	
};
//void exit()
//{
//	
//};