#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
#include<windows.h>
 int main()
{
	time_t t = time(NULL);
  struct tm tm = *localtime(&t);
	system("color 1f");
    int hour, minute, second;
    hour=minute=second=0;
    hour=tm.tm_hour;
    minute=tm.tm_min;
    second=tm.tm_sec;
 while(1)
    {
    	system("cls");
    	 printf("\n\n\n\n\n\t\t\t\tCurrent Time is :");
        printf("\n\n\n\t\t\t\t %02d : %02d : %02d ",hour,minute,second);
        second++;
        if(second==60)
		{
            minute=minute+1;
            second=0;
        }
        if(minute==60)
		{
            hour=hour+1;
            minute=0;
        }
        if(hour==24)
		{
            hour=0;
            minute=0;
            second=0;
        }
         
        Sleep(1000);
    }
 
    return 0;
}
