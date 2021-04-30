#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h> 
#include<unistd.h>
#include<windows.h>
#include<time.h>
void mainmenu(void);
void add(void);
void list(void);
void closes(void);
void Password(void);
void edit();
void transactions();
char password[20]={"psitkanpur"};
char find;
struct date
{
int day,month,year;	
};
struct BANK
{
	char fname[50];
	char name[30];
	char addr[60];
	double cash;
	char adhno[20];
	double mobno; 
	double accno;
    struct date dob;
    struct date withdraw;
    struct date deposite;
}bank,check,upd,dele,transaction;
FILE *fp,*fps;
int main()
{
SetConsoleTitle("@ SATYAM TRIPATHI and COMPANY ---------> BANK MANAGEMENT SYSTEM");
system("color 3f");
Password();
getch();
return 0;
}
void mainmenu()
{
system("cls");
int i;
t();
system("color 5f");
printf("\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO TRIPATHI'S BANK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 1. Create New Account ");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 2. Close Your Account");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 3. Search Your Account  Details");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 4. Modify Your Account Details");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 5. For Transaction");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xB2 6. Close Application");
printf("\n\n\t\t");
printf("\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB");
printf(" \n\n\t\tPlease Enter your choice  : ");
switch(getch())
{
case '1':
add();
break;
case '2':
closes();
break;
case '3':
list();
break;
case '4':
edit();
break;
case '5':
transactions();
break;
case '6':
{
system("cls");
printf("\n\n\n\n\n\t\t");
printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  THANKS!! TO BE A PART OF OUR LIBRARY   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
Sleep(3000);
exit(0);
}
break;
default:
{
printf("\n\n\t\t");
printf("\a\a Wrong Choice !!! Plesae Choose the correct OPTION");
Sleep(2000);
mainmenu();
}
}
}
int t(void)
{
time_t t;
time(&t);
printf("\n\t\tDATE and TIME : %s",ctime(&t));
return 0 ;
}
void add()
{
	int g;
	char ch;
	char choice;
	struct BANK b;
	fp=fopen("coursera.dat","ab+");
	system("cls");
	system("color 2f");
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 Enter today's DATE(DD/MM/YYYY) : ");
    scanf("%d/%d/%d",&bank.deposite.day,&bank.deposite.month,&bank.deposite.year);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Choose YOUR ACCOUNT NO.  : ");
    scanf("%lf",&check.accno);
    while(fread(&bank,sizeof(bank),1,fp)==1)
    {
    if(bank.accno==check.accno)
    {
    system("cls");
    system("color 4f");
    printf("\n\n\n\n\n\t\t\t WARNING !! THE RECORD ALREADY EXISTS.\n");
    getch();
    mainmenu();
    }  
    }
    bank.accno=check.accno; 
	system("color 3f");
    fflush(stdin);
 	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  \"First Name\" of the Person : ");
	gets(bank.fname);
	fflush(stdin);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 \"LAST Name\" of the Person : ");
    gets(bank.name);
	fflush(stdin);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  \"ADDRESS\" of the Person : ");
	gets(bank.addr);
	fflush(stdin);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter the \"Phone No.\" :  ");
	scanf("%lf",&bank.mobno);
	fflush(stdin);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter The \"AADHAR NO.\":  ");
	gets(bank.adhno);
	printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Please Deposite minimum cash [500] : ");
	scanf("%lf",&bank.cash);
	fseek(fp,0,SEEK_END);
	fwrite(&bank,sizeof(bank),1,fp);
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
printf("\n\n\n\n\n\t\t\t !! Account Created Successfully !!\n\n");
printf("\n\n\n\n\t\t   Do you Want Create More Acccounts...Press(Y/N)\t\n\n");
choice=getch();
if(choice=='n'||choice=='N')
mainmenu();
else
{
system("cls");
add();
}
}
void list()
{
	int g;
	char choice;
	int d=0;
    system("color 1E");
    system("cls");
    fflush(stdin);
 printf("\n\n\t\t\xDB\xDB\xDB\xDB\xB2 ENTER PHONE NO. : ");
    scanf("%lf",&check.mobno);
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
printf("\n\n\n\t\t\t\tSearching");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
    fps=fopen("coursera.dat","rb+");
    rewind(fps);
    while(fread(&bank,sizeof(bank),1,fps)==1)
    {
    if(bank.mobno==check.mobno)
   {
    system("cls");
    system("color 2B");
    printf("\n\n\n\t\t\t\t RECORDS Are Given As Follows : ");
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  ACCOUNT CREATED ON  : %d/%d/%d",bank.deposite.day,bank.deposite.month,bank.deposite.year);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  PHONE NO.  : %0.0lf",bank.mobno);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  FIRST NAME :  %s",bank.fname);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  LAST NAME :  %s",bank.name);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  ADDRESS :  %s",bank.addr);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  AADHAR NO. :  %s",bank.adhno);
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  AVAILABLE BALANCE :  %0.0lf Rs.",bank.cash);                
    printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  ACCOUNT NO. :  %0.0lf",bank.accno);
    d++;
	}
    }
if(d==0) 
{
	printf("\n\n\n\n\n\t\t\t\tNo Record Found");
	Sleep(2000);
}
printf("\n\n\n\n\t\t\tWOULD YOU LIKE TO VIEW MORE RECORDS (Y/N)");
choice=getch();
if(choice=='y'||choice=='Y')
list();
else
{
system("cls");
mainmenu();
}
}
void closes(void) 
{
system("cls");
int a=0,g;
FILE *temps,*sat;
system("color 3f");
printf("\n\n\n\n\n      Enter the \"PHONE NO.\" of the Person those Account you want to CLOSE :\n\n\t\t\t\t");
scanf("%lf",&dele.mobno);
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
printf("\n\n\n\t\t\t\tProcessing");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
printf("\n\n\n\t\t\t\tProcessing");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");

printf("\n\n\n\t\t\t\tProcessing");
for(g=0;g<3;g++)
{
	printf(".");
	Sleep(500);
}
system("cls");
sat=fopen("coursera.dat","r");
temps=fopen("newchannel.dat","w");
rewind(sat);
while(fread(&bank,sizeof(bank),1,sat)==1)
{
if(bank.mobno!=dele.mobno)
{
fwrite(&bank,sizeof(bank),1,temps);
}
else
{
a++;
system("cls");
printf("\n\n\n\n\t\t  !!!! Account closes Successfully !!!!\n");
Sleep(2000);
}
}
fclose(sat);
fclose(temps);
remove("coursera.dat");
rename("newchannel.dat","udemyss.dat");
if(a==0)
{
system("cls");
printf("\n\n\n\n\n\t\t\tBank Can't Reach To The Moment");
printf("\n\n\n\n\t\t\tPress Any Key To Go Back !!");
getch();
mainmenu();
}
else
{
system("cls");
printf("\n\tDO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");
if(getch()=='y')
closes();
else
mainmenu();
}
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
void edit(void)
{
char choice;
system("cls");
int c=0;
int g;
system("color 6f");
system("color 3F");
printf("\n\n\t\t\t  Enter PHONE NO. of the Account Holder : \n\n\t\t\t\t\t");
scanf("%lf",&upd.mobno);
fp=fopen("coursera.dat","rb+");
while(fread(&bank,sizeof(bank),1,fp)==1)
{
if(bank.mobno==upd.mobno)
{
system("cls");
printf("\n\n\t\t\t\tThe Account is AVAILABLE");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  ACCOUNT CREATED ON  : %d/%d/%d",bank.deposite.day,bank.deposite.month,bank.deposite.year);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  ACCOUNT NO. is : %0.0lf",bank.accno);
fflush(stdin);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter New First Name : ");
gets(bank.fname);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter New Last Name : ");
gets(bank.name);
fflush(stdin);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter New PHONE NO. : ");
scanf("%lf",&bank.mobno);
fflush(stdin);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter New AADHAR No. : ");
gets(bank.adhno);
fflush(stdin);
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter New ADDRESS : ");
gets(bank.addr);
c++;
system("cls");
printf("\n\n\n\n\n\t\t\t\t Record is Modifying");
for(g=0;g<4;g++)
{
Sleep(300);
printf(".");
}
system("cls");
printf("\n\n\n\n\n\t\t\t\t Record is Modifying");
for(g=0;g<4;g++)
{
Sleep(300);
printf(".");
}
system("cls");
printf("\n\n\n\n\n\t\t\t\t Record is Modifying");
for(g=0;g<4;g++)
{
Sleep(300);
printf(".");
}
system("cls");
printf("\n\n\n\n\n\t\t\t\tThe Record is Modified");
Sleep(2000);
fseek(fp,ftell(fp)-sizeof(bank),0);
fwrite(&bank,sizeof(bank),1,fp);
fclose(fp);
}
}
if(c==0)
{
system("cls");
printf("\n\n\n\n\t\t\t\t WARNING !! No Record Found  ");
Sleep(2000);
}
system("cls");
printf("\n\n\n\n\t\t\t  Do You Want To Modify another Record(Y/N)");
choice=getch();
if(choice=='Y'||choice=='y')
edit();
else
mainmenu();
}
void transactions(void)
{ 
char cho;
system("cls");
int choice,test=0;
FILE *old,*temper;
old=fopen("coursera.dat","r");
temper=fopen("guvi.dat","w");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter the Account No. of the Customer:");
scanf("%lf",&transaction.accno);
while(fread(&bank,sizeof(bank),1,old)==1)
{
if(bank.accno==transaction.accno)
{   
test=1;
system("cls");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  1.DEPOSITE\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  2.WITHDRAW\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter Your Choice : ");
switch(getch())
{
case '1':
system("cls");	
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter the Amount you want to Deposit : ");
scanf("%lf",&transaction.cash);
bank.cash=bank.cash+transaction.cash;
fseek(old,ftell(old)-sizeof(bank),0);
fwrite(&bank,sizeof(bank),1,temper);
system("cls");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Deposition Successful  \xDB\xDB\xDB\xDB\xB2");
Sleep(2000);
goto marr;
case '2':
system("cls");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2  Enter the Amount You Want to Withdraw :  ");
scanf("%lf",&transaction.cash);
bank.cash=bank.cash-transaction.cash;
fseek(old,ftell(old)-sizeof(bank),0);
fwrite(&bank,sizeof(bank),1,temper);
system("cls");
printf("\n\n\n\t\t\xDB\xDB\xDB\xDB\xB2 Withdraw Successful \xDB\xDB\xDB\xDB\xB2");
Sleep(2000);
goto mar;
}
}
else
fwrite(&bank,sizeof(bank),1,temper);
}
mar:
marr:
fclose(old);
fclose(temper);
remove("coursera.dat");
rename("guvi.dat","coursera.dat");
system("cls");
printf("\n\n\n\t\t\t Would You like Make more Transactions[y/n]");
cho=getch();
if(cho=='Y'||cho=='y')
transactions();
else
mainmenu();
if(test!=1)
{
system("cls");
printf("\n\n\n\n\n\t\t\t !! Record not found !!");
printf("\n\n\n\t\t\t Press Any Key to go MAIN MENU !!");
getch();
mainmenu();
}
}
