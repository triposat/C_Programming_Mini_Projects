#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>                  
#include<ctype.h>                   
#include<dos.h>                     
#include<time.h>
#define RETURNTIME 15
char catagories[][25]={"Computer","Electronics","Electrical","Civil","Mechnnical","Architecture","Pharmacy","Business","Gate"};
void returnfunc(void);
void mainmenu(void);
void addbooks(void);
void deletebooks(void);
void editbooks(void);
void searchbooks(void);
void issuebooks(void);
void viewbooks(void);
void closeapplication(void);
int  getdata();
int  checkid(int);
int t(void);
void Password();
void issuerecord();
FILE *fp,*ft,*fs;
int s;
char findbook;
char password[20]={"psitkanpur"};
struct meroDate
{
int mm,dd,yy;
};
struct books
{
int id;
char stname[20];
char name[20];
char Author[20];
int quantity;
float Price;
int count;
int rackno;
char *cat;
struct meroDate issued;
struct meroDate duedate;
};
struct books a;
int main()
{
	SetConsoleTitle("@SATYAM TRIPATHI AND COMPANY -------->>> LIBRARY MANAGEMENT SYSTEM");
Password();
getch();
return 0;

}
void mainmenu()
{
system("cls");
int i;
t();
printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 1. Add Books   ");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 2. Delete books");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 3. Search Books");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 4. Issue Books");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 5. View Book list");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 6. Edit Book's Record");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 7. Close Application");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
printf(" \n\n\t\tPlease Enter your choice  : ");
switch(getch())
{
case '1':
addbooks();
break;
case '2':
deletebooks();
break;
case '3':
searchbooks();
break;
case '4':
issuebooks();
break;
case '5':
viewbooks();
break;
case '6':
editbooks();
break;
case '7':
{
system("cls");
printf("\n\n\n\n\n\t\t");
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  THANKS!! TO BE A PART OF OUR LIBRARY   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
Sleep(3000);
exit(0);
}
default:
{
printf("\n\n\t\t");
printf("\a\a Wrong Choice !!! Plesae Choose the correct OPTION");
Sleep(2000);
mainmenu();
}
}
}
void addbooks(void)
{
system("cls");
int i;
int g;
printf("\n\n\n\t\t");
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  SELECT CATEGOIES  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 1. Computer");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 2. Electronics");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 3. Electrical");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 4. Civil");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 5. Mechanical");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 6. Architecture");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 7. Back to main menu");
printf("\n\n\t\t");
printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\t\t");
printf("Enter your choice:");
scanf("%d",&s);
if(s==7)
{
mainmenu() ;
}
system("cls");
fp=fopen("SATYAMs.dat","ab+");
if(getdata()==1)
{
a.cat=catagories[s-1];
fseek(fp,0,SEEK_END);
fwrite(&a,sizeof(a),1,fp);
fclose(fp);
system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     RECORD SAVING");
	for(g=0;g<5;g++)
	{
		Sleep(300);
		printf(".");
		
	}
system("cls");
printf("\n\n\n\n\n\n\t\t\t\t     RECORD SAVING");
	for(g=0;g<5;g++)
	{
		Sleep(300);
		printf(".");
		
	}
	
system("cls");
printf("\n\n\n\n\n\n\t\t\t\t     RECORD SAVING");
	for(g=0;g<5;g++)
	{
		Sleep(300);
		printf(".");
		
	}
system("cls");
printf("\n\n\n\n\n\t\t @@@@@@  Record Saved Successfully @@@@@@");
printf("\n\n\n\t\t");
printf("Do You Want To Save Any More Records (Y/N)????:");
if(getch()=='n')
mainmenu();
else
system("cls");
addbooks();
}
}
void deletebooks()
{
system("cls");
int d;
char another='y';
while(another=='y'||another=='Y')
{
system("cls");
printf("\n\n\n\t\t\t");
printf("Enter the Book ID to  delete:\n\n\t\t\t\t\t");
scanf("%d",&d);
fp=fopen("SATYAMs.dat","rb+");
rewind(fp);
while(fread(&a,sizeof(a),1,fp)==1)
{
if(a.id==d)
{

printf("\n\n\n\t\t");
printf(" \xB2\xB2\xB2  The book record is available  \xB2\xB2\xB2");
printf("\n\n\n\t\t");
printf("\xB2\xB2  Book name is  : %s",a.name);
printf("\n\n\n\t\t");
printf("\xB2\xB2  Rack No. is   : %d",a.rackno);
findbook='t';
}
}
if(findbook!='t')
{
printf("\n\n\n\t\t");
printf("No Record Is Found PLEASE Mpdify The Search");
if(getch())
mainmenu();
}
if(findbook=='t' )
{
printf("\n\n\n\t\t");
printf("Do you want to DELETE it?(Y/N):");
if(getch()=='y')
{
ft=fopen("Stests.dat","wb+");
rewind(fp);
while(fread(&a,sizeof(a),1,fp)==1)
{
if(a.id!=d)
{
fseek(ft,0,SEEK_CUR);
fwrite(&a,sizeof(a),1,ft); 
}                              
}
fclose(ft);
fclose(fp);
remove("SATYAMs.dat");
rename("Stests.dat","SATYAMs.dat");
fp=fopen("SATYAMs.dat","rb+");   
if(findbook=='t')
{
printf("\n\n\n\n\t\t");
printf("The record is sucessfully deleted");
printf("\n\n\n\t\t");
system("cls");
printf("Do You Want To \"DELETE\" Any Other Record?(Y/N)");
}
}
else
mainmenu();
fflush(stdin);
another=getch();
}
}
printf("\n\t\t");
mainmenu();
}
void searchbooks()
{
system("cls");
int d;
int g;
printf("\n\n\t\t\t\xDB\xDB\xDB\xDB\xB2 SEARCH BOOKS \xDB\xDB\xDB\xDB\xB2");
printf("\n\n\n\n\t\t\t\xDB\xDB\xDB\xB2 1. Search By ID");
printf("\n\n\n\t\t\t\xDB\xDB\xDB\xB2 2. Search By Name");
printf("\n\n\n   \t\t\tEnter Your Choice : ");
fp=fopen("SATYAMs.dat","rb+"); 
rewind(fp); 
switch(getch())
{
case '1':
{
system("cls");
printf("\n\n\t\t\t @@@@@ Search Books By Id @@@@@");
printf("\n\n\n\t\t\t\tEnter the book id : \n\n\t\t\t\t\t");
scanf("%d",&d);
system("cls");
printf("\n\n\n\t\t\t\tSearching");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
printf("\n\n\n\t\t\t\tSearching");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
while(fread(&a,sizeof(a),1,fp)==1)
{
if(a.id==d)
{
system("cls");
printf("\n\n\t\t\tThe Book is available");
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\t\t\t\xB2\xB2\xB2 ID       : %d",a.id);
printf("\n\n\t\t\t\xB2\xB2\xB2 Name     : %s",a.name);
printf("\n\n\t\t\t\xB2\xB2\xB2 Author   : %s ",a.Author);
printf("\n\n\t\t\t\xB2\xB2\xB2 Qantity  : %d ",a.quantity);
printf("\n\n\t\t\t\xB2\xB2\xB2 Price:Rs : %.2f",a.Price);
printf("\n\n\t\t\t\xB2\xB2\xB2 Rack No  : %d ",a.rackno);
findbook='t';
}
}
if(findbook!='t') 
{
	system("cls");
	printf("\n\n\n\n\n\t\t\t\tNo Record Found");
	Sleep(2000);
}
printf("\n\n\n\t\t\t Do You Want To Search Another Book ? (Y/N)");
if(getch()=='y'||getch()=='Y')
searchbooks();
else
mainmenu();
break;
}
case '2':
{
char s[15];
system("cls");
printf("\n\n\t\t\t @@@@@ Search Books By Name @@@@@");
printf("\n\n\t\t\t\tEnter Book Name : \n\n\t\t\t\t\t");
gets(s);
int d=0;
while(fread(&a,sizeof(a),1,fp)==1)
{
if(strcmpi(a.name,(s))==0)
{
system("cls");
printf("\n\n\t\t\tThe Book is available");
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\t\t\t\xB2\xB2\xB2 ID      : %d",a.id);
printf("\n\n\t\t\t\xB2\xB2\xB2 Name     :%s",a.name);
printf("\n\n\t\t\t\xB2\xB2\xB2 Author   :%s ",a.Author);
printf("\n\n\t\t\t\xB2\xB2\xB2 Qantity  :%d ",a.quantity);
printf("\n\n\t\t\t\xB2\xB2\xB2 Price:Rs :%.2f",a.Price);
printf("\n\n\t\t\t\xB2\xB2\xB2 Rack No  :%d ",a.rackno);
d++;
}
}
if(d==0)
{
	printf("\n\n\n\n\n\t\t\t\tNo Record Found");
	Sleep(2000);
}
//system("cls");
printf("\n\n\n\t\t\t Do You Want To Search Another Book ? (Y/N)");
if(getch()=='y'||getch()=='Y')
searchbooks();
else
mainmenu();
break;
}
default :
getch();
searchbooks();
}
fclose(fp);
}
void issuebooks(void)
{
int t;
system("cls");
printf("\n\n\n\n\t\t\t\t\xDB\xDB\xDB\xDb\xB2  ISSUE SECTION  \xDB\xDB\xDB\xDb\xB2 ");
printf("\n\n\n\t\t\t\t\xDB\xDB\xDB\xDb\xB2     1. Issue a Book");
printf("\n\n\t\t\t\t\xDB\xDB\xDB\xDb\xB2     2. View Issued Book");
printf("\n\n\t\t\t\t\xDB\xDB\xDB\xDb\xB2     3. Search Issued Book");
printf("\n\n\t\t\t\t\xDB\xDB\xDB\xDb\xB2     4. Remove Issued Book");
printf("\n\n\n\t\t\t\tEnter a Choice : ");
switch(getch())
{
case '1':
{
system("cls");
int c=0;
char another='y';
while(another=='y'||another=='Y')
{
system("cls");
printf("\n\n\n\n\n\t\t\t\t@@@@ Issue Book section @@@@");
printf("\n\n\n\t\t\t\tEnter the Book Id : ");
scanf("%d",&t);
fp=fopen("SATYAMs.dat","rb");
fs=fopen("IssueSs.dat","ab+");
if(checkid(t)==0)
{
system("cls");
printf("\n\n\n\n\n\t\t\tThe book Record is Available : ");
printf("\n\n\t\t\tThere are %d unissued books in library : ",a.quantity);
printf("\n\n\n\t\t\tThe name of book is : %s",a.name);
printf("\n\n\n\t\t\tEnter student name  : ");
gets(a.stname);
printf("\n\n\t\t\tThe BOOK of ID %d is ISSUED",a.id);
time_t t = time(NULL);
  struct tm tm = *localtime(&t);
 a.issued.dd=tm.tm_mday;
 a.issued.mm=tm.tm_mon + 1;
 a.issued.yy=tm.tm_year + 1900;
printf("\n\n\t\t\tIssued date=%d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
a.duedate.dd=a.issued.dd+RETURNTIME; 
a.duedate.mm=a.issued.mm;
a.duedate.yy=a.issued.yy;
if(a.duedate.dd>30)
{
a.duedate.mm=a.duedate.mm+a.duedate.dd/30;
a.duedate.dd=a.duedate.dd-30;

}
if(a.duedate.mm>12)
{
a.duedate.yy=a.duedate.yy+a.duedate.mm/12;
a.duedate.mm=a.duedate.mm-12;

}
printf("\n\n\t\t\tTo be RETURN : %d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
fseek(fs,sizeof(a),SEEK_END);
fwrite(&a,sizeof(a),1,fs);
fclose(fs);
c=1;
}
if(c==0)
{
printf("\n\n\t\t\t\t\tNo Record Found");
}
printf("\n\n\n\n\n\t\t\t\tDo You Want To ISSUE any more Books(Y/N):");
fflush(stdin);
another=getche();
fclose(fp);
}
break;
}
case '2': 
{
system("cls");
int j=4;
printf("\n\n\n\n\t\t\t\t @@@@ Issued Book List @@@@\n");
fs=fopen("IssueSs.dat","rb");
while(fread(&a,sizeof(a),1,fs)==1)
{
    printf("\n\n\n\n\t\t\t CATEGORY : %s",a.cat);
	printf("\n\n\t\t\t Id : %d",a.id);
	printf("\n\n\t\t\t BOOK NAME : %s",a.name);
	printf("\n\n\t\t\t ISSUED DATE : %d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
	printf("\n\n\t\t\t RETURN DATE : %d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
	printf("\n\n\t\t\t STUDENT NAME : %s",a.stname);
	}
fclose(fs);
returnfunc();
}
break;
case '3':
{
system("cls");
printf("\n\n\n\n\n\t\t\t\tEnter Book ID:\n\n\t\t\t\t");
int p,c=0;
char another='y';
while(another=='y'||another=='Y')
{
scanf("%d",&p);
fs=fopen("IssueSs.dat","rb");
while(fread(&a,sizeof(a),1,fs)==1)
{
if(a.id==p)
{
issuerecord();
printf("\n\n\n\n\t\t\t\tPress \"Any key\"");
getch();
issuerecord();
c=1;
}
}
fflush(stdin);
fclose(fs);
if(c==0)
{
	system("cls");
printf("\n\n\t\t\t\tNo Record Found");
Sleep(2000);
}
system("cls");
printf("\n\n\t\t\t\tDo You Want to search Any other Book ? (Y/N)");
another=getch();
}
}
break;
case '4': 
{
system("cls");
int b;
FILE *fg;
char another='y';
while(another=='y'||another=='Y')
{
printf("\n\n\t\t\t\tEnter BOOK ID  TO \"REMOVE\" : \n\n\t\t\t\t");
scanf("%d",&b);
fs=fopen("IssueSs.dat","rb+");
while(fread(&a,sizeof(a),1,fs)==1)
{
if(a.id==b)
{
issuerecord();
findbook='t';
}
if(findbook=='t')
{
printf("\n\n\n\t\t\t\tDo You Want to REMOVE it?(Y/N)");
if(getch()=='y')
{
fg=fopen("recordSs.dat","wb+");
rewind(fs);
while(fread(&a,sizeof(a),1,fs)==1)
{
if(a.id!=b)
{
fseek(fs,0,SEEK_CUR);
fwrite(&a,sizeof(a),1,fg);
}
}
fclose(fs);
fclose(fg);
remove("IssueSs.dat");
rename("recordSs.dat","IssueSs.dat");
system("cls");
printf("\n\n\n\n\n\t\t\t\tThe Issued Book is REMOVED from list");
system("cls");
}
}
if(findbook!='t')
{
printf("\n\n\n\n\t\t\t\tNo Record Found");
}
}
system("cls");
printf("\n\n\n\n\n\t\t\t\tDo You Want to DELETE Any Other Record ?? (Y/N)");
another=getch();
}
}
break;
default:
system("cls");
printf("\n\n\n\n\n\t\t\t\t\aWrong Entry!!");
getch();
issuebooks();
break;
}
returnfunc();
}
void viewbooks(void)
{
int i=0,j;
system("cls");
printf("\n\n\t\t\t@@@@@ Book List @@@@@");
fp=fopen("SATYAMs.dat","rb");
while(fread(&a,sizeof(a),1,fp)==1)
{
	printf("\n\n\n\n\t\t\t CATEGORY : %s",a.cat);
	printf("\n\n\t\t\t Id : %d",a.id);
	printf("\n\n\t\t\t BOOK NAME : %s",a.name);
	printf("\n\n\t\t\t AUTHOR : %s",a.Author);
	printf("\n\n\t\t\t QTY : %d",a.quantity);
	printf("\n\n\t\t\t PRICE : %.2f",a.Price);
	printf("\n\n\t\t\t RACK NO. : %d",a.rackno);
	printf("\n\n\n");
    i=i+a.quantity;
}
printf("\n\n\tTotal Books =%d",i);
fclose(fp);
returnfunc();
}
void editbooks(void)
{
system("cls");
int c=0;
int d,e;
int g;
printf("\n\n\t\t\t\t@@@@ Edit Books Section @@@@");
char another='y';
while(another=='y'||another=='Y')
{
system("cls");
printf("\n\n\t\t\t\tEnter Book Id to be EDITED : \n\n\t\t\t\t\t");
scanf("%d",&d);
fp=fopen("SATYAMs.dat","rb+");
while(fread(&a,sizeof(a),1,fp)==1)
{
if(checkid(d)==0)
{
printf("\n\n\t\t\t\tThe BOOK is AVAILABLE");
printf("\n\n\t\t\t\tThe Book ID : %d",a.id);
fflush(stdin);
printf("\n\n\t\t\t\tEnter New Book Name : ");
gets(a.name);
printf("\n\n\t\t\t\tEnter New Author Name : ");
gets(a.Author);
fflush(stdin);
printf("\n\n\t\t\t\tEnter New Quantity : ");
scanf("%d",&a.quantity);
printf("\n\n\t\t\t\tEnter New Price : ");
scanf("%f",&a.Price);
printf("\n\n\t\t\t\tEnter New Rack No. : ");
scanf("%d",&a.rackno);
system("cls");
printf("\n\n\n\n\n\t\t\t\t Record is Modifying ");
	for(g=0;g<4;g++)
	{
		Sleep(300);
		printf(".");
		
	}
	system("cls");
printf("\n\n\n\n\n\t\t\t\t Record is Modifying ");
	for(g=0;g<4;g++)
	{
		Sleep(300);
		printf(".");
		
	}
system("cls");

printf("\n\n\n\n\n\t\t\t\t Record is Modifying ");
	for(g=0;g<4;g++)
	{
		Sleep(300);
		printf(".");
		
	}
system("cls");
printf("\n\n\n\n\n\t\t\t\tThe Record is Modified");
Sleep(2000);
fseek(fp,ftell(fp)-sizeof(a),0);
fwrite(&a,sizeof(a),1,fp);
fclose(fp);
c=1;
}
if(c==0)
{
	system("cls");
printf("\n\n\n\n\t\t\t\t No Record Found  ");
Sleep(2000);
}
}
system("cls");
printf("\n\n\n\n\t\t\t\tDo You Want To Modify another Record ? (Y/N)");
fflush(stdin);
another=getch();
}
returnfunc();
}
void returnfunc(void)
{
{
printf("\n\n\n\n\t\t\t Press \"ENTER\" To Return To  \"MAIN MENU\"");
}
a:
if(getch()==13) 
mainmenu();
else
goto a;
}
int getdata()
{
int t;
printf("\n\n\n\t\t\t");
printf("Enter the Information Below");
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2 Category : ");
printf("%s ",catagories[s-1]);
printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2 Book ID : ");
scanf("%d",&t);
if(checkid(t) == 0)
{
printf("\n\n\n\t\t\t");
printf("\aThe BOOK ID \"ALREADY EXIST\"\a");
getch();
mainmenu();
return 0;
}
a.id=t;
fflush(stdin);
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 Book Name: ");
gets(a.name);
fflush(stdin);
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 Author Name : ");
gets(a.Author);
fflush(stdin);
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 Quantity : ");
scanf("%d",&a.quantity);
fflush(stdin);
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 Price : ");
scanf("%f",&a.Price);
fflush(stdin);
printf("\n\n\t\t\t\xB2\xB2\xB2\xB2 Rack No. : ");
scanf("%d",&a.rackno);
fflush(stdin);
return 1;
}
int checkid(int t)
{
rewind(fp);
while(fread(&a,sizeof(a),1,fp)==1)
if(a.id==t)
return 0;  
return 1; 
}
int t(void)
{
time_t t;
time(&t);
printf("\n\t\tDATE and TIME:%s",ctime(&t));
return 0 ;
}
void Password(void) 
{

system("cls");
char ch,pass[10];
int i=0,j,g;
system("color 1f");
printf("\n\n\n\n\n\t\t\t !!!! PASSWORD PROTECTED SYSTEM !!!!");
printf("\n\n\n\n\t\t\t     PLEASE ENTER THE SECURITY CODE :");
printf("\n\n\t\t\t\t\t");
pass[i]=getch();
        while(pass[i]!='\r')
        {
            if(pass[i]=='\b')
            {
                i--;
                printf("\b");
                printf(" ");
                printf("\b");
                pass[i]=getch();
            }
            else
            {
                printf("*");
                i++;
                pass[i]=getch();
            }
        }
        pass[i] = '\0';
if(strcmpi(pass,password)==0)
{
	
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	system("cls");
printf("\n\n\n\n\n\t\t\t WELCOME !!!! SECURITY CODE MATCH");
Sleep(2000);
mainmenu();
}
else
{
		system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t     Matching");
	for(g=0;g<4;g++)
	{
		Sleep(500);
		printf(".");
		
	}
	system("color 4f");
	system("cls");
printf("\n\n\n\n\n\n\n\n\t\t\t     WARNING !! Incorrect Security Code ??");
getch();
Password();
}
}
void issuerecord()
{
system("cls");
printf("\n\n\t\t\t\tThe Book has taken by Mr. %s",a.stname);
printf("\n\n\t\t\t\tIssued Date:%d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
printf("\n\n\t\t\t\tReturning Date:%d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
}
