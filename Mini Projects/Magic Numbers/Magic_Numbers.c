#include<stdio.h>
#include<unistd.h>
int main()
{
	char ch;
	system("color f0");
    printf("\t   ##########################################################");
    printf("\n\t   ############             Welcome To           ############");
    printf("\n\t   ############                The               ############");
    printf("\n\t   ############             Magic Show           ############");
    printf("\n\t   ##########################################################");
    printf("\n\n\n\n\t\t\t   [  Think Any Number  ]");
    printf("\n\n\n\t\t\t314\t322\t356\t456\n");
   printf("\n\n\t\t\t413\t425\t357\t458\n");
   printf("\n\n\t\t\t614\t362\t306\t556\n");
   sleep(10);
   goto t;
   y: 
       system("cls");
    printf("\n\n\n\t\t\tNow \"Again\" Press \"ENTER\"  To Continue..");
    goto s;
    system("cls");
    t:
    	system("color f0");
        system("cls");	
        	system("color f0");
   printf("\n\n\n\t\t\tNow Press \"ENTER\"  To Continue..");
   s:
   		system("color f0");
   ch=getch();
   if(ch==13)
   goto x;
   else 
   system("color 4f");
   system("cls");
   printf("\n\n\n\n\n\n\t\t\tPlease Enter The Correct Key..");
   sleep(4);
   goto y;
   x:
   	{
   		//system("cls");
   printf("\n\n\n\t\t\t312\t321\t346\t426\n");
   printf("\n\n\t\t\t412\t424\t353\t459\n");
   printf("\n\n\t\t\t613\t361\t307\t557\n"); 
}
}
