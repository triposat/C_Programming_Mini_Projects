#include<stdio.h>
#include<string.h>
#include<windows.h>
int last_day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]={" ","\n\n\n\t\tJanuary","\n\n\n\t\tFebruary","\n\n\n\t\tMarch","\n\n\n\t\tApril","\n\n\n\t\tMay","\n\n\n\t\tJune","\n\n\n\t\tJuly","\n\n\n\t\tAugust","\n\n\n\t\tSeptember","\n\n\n\t\tOctober","\n\n\n\t\tNovember","\n\n\n\t\tDecember"};
int findoutdaycode(int year) //this function will return the daycode
{
	int codeofday;
	int d1, d2, d3;
	d1=(year-1)/4;
	d2=(year-1)/100;
	d3=(year-1)/400;
	codeofday=(year + d1 - d2 + d3) %7;
	return codeofday;
}
int leapyear(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
	{
		last_day[2] = 29; //if the given year will be LEAP then february becomes of 29th..
		return 1;
	}
	else
	{
		last_day[2] = 28;//if the given year will not be LEAP then february becomes of 28th..
		return 0;
	}
}

void calendar_printing(int year, int codeofday)
{
	int month, day,i;
	printf("\n\n\t\t\t\t%d CALENDAR",year);
	printf("\n\n");
	for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
	for ( month=1;month<=12;month++ )
	{
		printf("%s", months[month]);
		printf("\n\n Sun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
		for (day=1;day<=1 +codeofday * 5;day++) //this function will set the position of date 1st.		
		{
			printf(" ");
		}
		for ( day=1;day<=last_day[month]; day++ )//printing all the dates of month.
		{
		Sleep(10); 
		system("color f1");
			printf("%2d",day);
			if ((day+codeofday)%7>0)//here we check thast the day is before saturday or not..
				printf("   ");
			else
			{
				printf("\n ");
			}
		}
			codeofday=(codeofday + last_day[month])%7;//Now here we will move to the second month...
		
		printf("\n");
		for(i=0; i<40; i++)
    {
        printf("\xdb");
}
printf("\n\n");
	}
}


int main()
<% // We can also use this symbol in place of {}..
// this SetConsoleTitle is used to set any name in the output window...
	int row,col,r,c,q;
SetConsoleTitle("SATYAM TRIPATHI'S PROGRAM---->>> BEST CALENDAR USING C PROGRAMMING");
system("color 1f");
	int year, codeofday;
	int i,j,k;
system("color 1E");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
    printf("\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
}
printf("\n");
 for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
	printf("\t\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5       CALENDAR       \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5                      \5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
	printf("\n\t\t\t\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5\5");
	printf("\n");
	 for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
   printf("\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
   printf("\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
   printf("\n");
    Sleep(3000);
    system("cls");
	printf("\n\n\n\n\t\t\t\tEnter the Year :");
	printf("\n\n\t\t\t\t     ");
	scanf("%d",&year);
	system("color 1e");
	printf("\n\n\n\t\t\t\t   LOADING");
    printf("\n\n\t\t\t     ");
    for(r=2; r<=20; r++)
    {
        for(q=1; q<=100000000; q++);
        printf("%c",186);
    }
    Sleep(1000);
	system("cls");
    codeofday = findoutdaycode(year); //Here we will find the code of the day by calling function findouttheday !!
	leapyear(year);
	calendar_printing(year,codeofday);
	printf("\n");
%>                                                    
