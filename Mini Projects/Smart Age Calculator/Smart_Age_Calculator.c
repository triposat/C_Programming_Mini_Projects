#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<windows.h>
int leapyear(int y1)
{
	int i=0;
	if((y1%4||y1%400)==0&&y1%100!=0)
	i++;
	return i;
}
int main()
{
	int g;
	char u[100]={"[][][]   Now please enter the D.O.B  [][][]"};
char v[100]={"[[[   Enter the day   ]]] "};
char w[100]={"[[[  Enter the month  ]]]"};
char h[100]={"[[[  Enter the year  ]]]"};
int d2,d3,m2,m3,y2,y3;
	system("color 3f");
	time_t t = time(NULL);
  struct tm tm = *localtime(&t);
printf("\n\n\t\t\t   Current Date is :  %02d-%02d-%02d \n", tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
 int d1=tm.tm_mday;
 int m1=tm.tm_mon + 1;
 int y1=tm.tm_year + 1900;
 	printf("\n\n\t\t\t\t\t\t\t   ");
	printf("\n\n\t\t  ");
	for(g=0;g<strlen(u);g++)
	{
		system("color 5f");
	    printf("%c",u[g]);
		Sleep(30);
		if(u[g]>=97&&u[g]<=122)
		{
			u[g]=u[g]-32;
			printf("\b%c",u[g]);
			Sleep(30);
		}
	}
	Sleep(800);
	printf("\n\n\n\n ");
	for(g=0;g<strlen(v);g++)
	{
		system("color 6f");
	    printf("%c",v[g]);
		Sleep(30);
		if(v[g]>=97&&v[g]<=122)
		{
		v[g]=v[g]-32;
			printf("\b%c",v[g]);
			Sleep(30);
		}
	}
	printf("\n\n\t      ");
scanf("%d",&d2);
printf("\t\t\t");
	for(g=0;g<strlen(w);g++)
	{
		system("color 9f");
	    printf("%c",w[g]);
		Sleep(30);
		if(w[g]>=97&&w[g]<=122)
		{
			w[g]=w[g]-32;
			printf("\b%c",w[g]);
			Sleep(30);
		}
	}
	printf("\n\n\t\t\t\t   ");
scanf("%d",&m2);
printf("\n\t\t\t\t\t\t");
	for(g=0;g<strlen(h);g++)
	{system("color 8f");
	    printf("%c",h[g]);
		Sleep(30);
		if(h[g]>=97&&h[g]<=122)
		{
			h[g]=h[g]-32;
			printf("\b%c",h[g]);
			Sleep(30);
		}
	}
	printf("\n\n\t\t\t\t\t\t\t   ");
scanf("%d",&y2);
year(d1,m1,y1,d2,m2,y2);
}

int year(int d1,int m1,int y1,int d2,int m2,int y2)
{
	int i;
	int d3,y3,m3;
	if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
	{
		if(d2>d1)
    	{
    	m1=m1-1;
    	d1=d1+29;
    	}
	}
    else if(m1==2)
	{
     leapyear(y1);
     if(i==1&&d2>d1)
    	{
    	m1=m1-1;
    	d1=d1+29;
    	}
     else 
     {
	 if(i==0&&d2>d1)
     {
     m1=m1-1;
     d1=d1+28;
     }
	}
}
    else
    {
    	if(d2>d1)
    	{
    	m1=m1-1;
    	d1=d1+30;
    	}
	}
    if(m2>m1)
    {
    y1=y1-1;
    m1=m1+12;
    }
    if(y2>y1)
    {
    	 MessageBox(0,"INVALID OPTION !! please try again !!","EMPIRE'S World",MB_ICONWARNING);
    exit(1);
    }
    d3=d1-d2;
    m3=m1-m2;
    y3=y1-y2;
    system("cls");
     printf("\n\n\n\n\t\t\t\tYOUR \"Age\" is : \n\n\n\t\t\tYears : %d \n\n\t\t\t\t    Month : %d \n\n\t\t\t\t\t\tDay: %d ",y3,m3,d3);
    printf("\n\n\n\t\t\t\t");
system("pause");

}
