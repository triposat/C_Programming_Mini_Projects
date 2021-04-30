#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
	char oy[100]={"[[[  Correct answers are  ]]]"};
	char ds[100]={"[[[  Wrong  answers are  ]]]"};
 int i,a[10],n=0,sat=0,t=0,g,z[10],y[10];
 char ch;
 system("color 1f");
 system("kbc2.mp3");
 printf("\n\n\n\n\n\t\t\tWELCOME TO \"KAUN BANEGA CROREPATI\"");
 Sleep(2000);
 system("cls");
 for(i=1;i<=10;i++)
 {
  n=0;
  switch(i)
  {
  	system("cls");
  	
  	
  case 1:
   printf("\n\n\n\n\n\t\t\t      [[[ Float is the  ]]]");
   printf("\n\n\n\n\t\t[1]. Data type\t\t\t[3]. Label\n\n\n\t\t[2]. Process\t\t\t[4]. Variable");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='1')
   {
   	sat++;
   	system("cls");
   goto x;
}
else
{
	t++;
	goto tu;
}
   break;
   tu:
   x:
  case 2:
  	system("cls");
   printf("\n\n\n\n\n\t\t[[[  In a flowchart , a parallelogram indicates  ]]]");
   printf("\n\n\n\n\t\t[1]. Process\t\t\t[3]. Input/Output\n\n\n\t\t[2]. Decision\t\t\t[4]. start/End");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='3')
   {
   	sat++;
   	system("cls");
   goto b;
}
else
{
	t++;
	goto tr;
}
   break;
   b:
   	tr:
  case 3:
  system("cls");
   printf("\n\n\n\n\n\t[[[  Which of the following is not a basic data type  in C language ]]]");
   printf("\n\n\n\n\t\t[1]. Float\t\t\t[3]. int\n\n\n\t\t[2]. real\t\t\t[4]. char");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='2')
   {
   	sat++;
   	system("cls");
   goto c;
}
else
{
	t++;
	goto tri;
}
   break;
   tri:
   c:
  case 4:
    system("cls");
   printf("\n\n\n\n\n [[[ The program written by the programmer in high level language is called ]]]");
   printf("\n\n\n\n\t[1]. Object program \t\t\t[3]. Source program\n\n\n\t[2]. Assembled program\t\t\t[4]. compiled program");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='3')
   {
   	sat++;
   	system("cls");
   goto d;
}
else
{
	t++;
	goto tg;
}
   break;
   tg:
   d:
  case 5:
   system("cls");
   printf("\n\n\n\n\n\t\t[[[  By default a real number is treated as a ]]]");
   printf("\n\n\n\n\t\t[1]. Float\t\t\t[3]. Double\n\n\n\t\t[2]. Long Double\t\t[4]. Far Double");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='1')
   {
   	sat++;
   	system("cls");
   goto e;
}
else
{
	t++;
	goto tf;
}
   break;
   tf:
   e:
  case 6:
  system("cls");
   printf("\n\n\n\n\n    [[[ which of the folloeing special symbol allowed in a variable name ]]]");
   printf("\n\n\n\n\t\t[1]. aestrisk(*)\t\t[3]. pipeline(|)\n\n\n\t\t[2]. hyphen(-)\t\t\t[4]. undescore(_)");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='1')
   {
   	sat++;
   	system("cls");
   goto f;
}
else
{
	t++;
	goto ts;
}
   break;
   ts:
   f:
  case 7:
  system("cls");
   printf("\n\n\n\n\n\t\t\t [[[ the value of EOF symbolic constant ]]]");
   printf("\n\n\n\n\t[1]. -1 ,but vary according to the compiler\t\t[3]. 1\n\n\n\t[2]. -1\t\t\t\t\t\t\t[4]. Error");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='1')
   {
   	sat++;
   	system("cls");
   goto g;
}
else
{
	t++;
	goto td;
}
   break;
   td:
   g:
  case 8:
   system("cls");
   printf("\n\n\n\n\n\t\t[[[ In which order do the following gets evaluated ]]]");
   printf("\n\n\n\t\tRelational , Arithmetic , Logical , Assignment");
   printf("\n\n\n\n\t\t\t[1]. 4,3,2,1\t\t[3]. 2,1,3,4\n\n\n\t\t\t[2]. 1,2,3,4\t\t[4]. 3,2,1,4");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='3')
   {
   	sat++;
   	system("cls");
   goto h;
}
else
{
	t++;
	goto tt;
}
   break;
   tt:
   h:
  case 9:
   system("cls");
   printf("\n\n\n\n\n\t\t[[[ how to scan one-by-one character of \"string\" at a time ]]]");
   printf("\n\n\n\n\t\t\t[1]. getche()\t\t[3]. getchar()\n\n\n\t\t\t[2]. scanf()\t\t[4]. gets()");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='3')
   {
   	sat++;
   	system("cls");
   goto lo;
}
else
{
	t++;
	goto ty;
}
   break;
   ty:
   lo:
  case 10:
  system("cls");
   printf("\n\n\n\n\n\tPrototype and related information related to \"graphics\" held in ]]]");
   printf("\n\n\n\n\t\t[1]. graphics.h\t\t\t[3]. unistd.h\n\n\n\t\t[2]. windows.h\t\t\t[4]. stdio.h");
   //scanf("%d",&n);
   ch=getch();
   if(ch=='1')
   {
   	sat++;
   	i=11;
   	system("cls");
}
else
{
	t++;
	i=11;
}
   break;
  default:
   break;
   }
   }
   if(sat>t)
   {
   	system("cls");
   	system("color 2f");
   	printf("\n\n\n\n\t\t\t");
	for(g=0;g<strlen(oy);g++)
	{
	    printf("%c",oy[g]);
		Sleep(30);
		if(oy[g]>=97&&oy[g]<=122)
		{
			oy[g]=oy[g]-32;
			printf("\b%c",oy[g]);
			Sleep(30);
		}
 }
	printf("\n\n\t\t\t\t  %d",sat);
   	printf("\n\n\n\n\t\t\t");
	for(g=0;g<strlen(ds);g++)
	{
	    printf("%c",ds[g]);
		Sleep(30);
		if(ds[g]>=97&&ds[g]<=122)
		{
			ds[g]=ds[g]-32;
			printf("\b%c",ds[g]);
			Sleep(30);
		}
	}
	system("color 2f");
	printf("\n\n\t\t\t\t  %d",t);
   }
   else
   {
   	system("cls");
   	system("color 4f");
   	printf("\n\n\n\n\t\t\t");
	for(g=0;g<strlen(oy);g++)
	{
	    printf("%c",oy[g]);
		Sleep(30);
		if(oy[g]>=97&&oy[g]<=122)
		{
			oy[g]=oy[g]-32;
			printf("\b%c",oy[g]);
			Sleep(30);
		}
	}
	printf("\n\n\t\t\t\t  %d",sat);
   	printf("\a\a\a");
   	system("color 4f");
   	printf("\n\n\n\n\t\t\t");
	for(g=0;g<strlen(ds);g++)
	{
	    printf("%c",ds[g]);
		Sleep(30);
		if(ds[g]>=97&&ds[g]<=122)
		{
			ds[g]=ds[g]-32;
			printf("\b%c",ds[g]);
			Sleep(30);
		}
	}
	printf("\n\n\t\t\t\t  %d",t);
   }
   }
