#include <stdio.h>
#include<string.h> 
#include<unistd.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
float amount=0.00;
int deposit, withdraw,satyam;
int choice, pin, k,g,s,yt;
char ch,pass[100];
char transaction ='y';
char f[100]={"######  welcome to atm service  ######"};
char r[100]={"  please enter your secret pin"};
char oy[100]={"[1] check balance "};
char t[100]={"[2] withdraw cash "};
char u[100]={"[3] deposite cash "};
char v[100]={"[4] quit "};
char w[100]={"your balance is : "};
char x[100]={"enter the amount you want to withdraw  "};
char y[100]={"[   press any key to continue    ]"};
char z[100]={"do you wish to have another transaction(y/n) ????"};
char h[100]={"$$$$$$ thanks for using our atm service $$$$$$"};
char i[100]={"invalid amount !!!! please enter the amount in multiples of [ 100 ]"};
char l[100]={"  your account has insufficient balance !!!"};
char m[100]={"$$$  please collect your cash  $$$$"};
char n[100]={"  your current balance is "};
char o[100]={" enter the amount to deposite "};
char p[100]={"  your current balance is "};
char q[100]={"  Invalid Option !! Please try Again...  "};
void main()
{
	system("color F0");
	system("cls");
	while(1)
	{
			system("cls");
		fg:
	printf("\n\n\n\n\n\n\n\n\n\t\t\t");
	for(g=0;g<strlen(f);g++)
	{
		system("color 3f");
	    printf("%c",f[g]);
		Sleep(30);
		if(f[g]>=97&&f[g]<=122)
		{
			f[g]=f[g]-32;
			printf("\b%c",f[g]);
			Sleep(30);
		}
	}
	Sleep(2200);
	uber:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\t\t\t  ");
	for(g=0;g<strlen(r);g++)
	{
		system("color 3f");
	    printf("%c",r[g]);
		Sleep(30);
		if(r[g]>=97&&r[g]<=122)
		{
			r[g]=r[g]-32;
			printf("\b%c",r[g]);
			Sleep(30);
		}
	}
		//system("cls");
		printf("\n\n\n\t\t\t\t\t ");
		for(yt=0;yt<100;yt++)
	{
		ch=getch();
		pass[yt]=ch;
		if(ch!=13)
		printf("*");
		else
		break;
	}
	pass[yt]='\0';
	//system("cls");
	if(strcmpi(pass,"9876")==0)	
	goto ola;
	else
	{
		int	kk=4;
jhg:
	system("cls");
	system("color 4f");	
printf("\n\n\n\n\n\n\n\t\t     XXXX  Please Enter Valid PIN  XXXX");
kk--;
if(kk==0)
{
	Sleep(2000);
system("cls");
system("color F0");	
goto uber;
}
else
{
printf("\a\a");
Sleep(400);
system("cls");
Sleep(400);
goto jhg;
}
}

	ola:
		system("cls");
		system("color 1f");
		printf("\n\n\n\n\n\n\n\t");
		for(g=0;g<strlen(oy);g++)
	{
	//	system("color 3f");
	    printf("%c",oy[g]);
		Sleep(30);
		if(oy[g]>=97&&oy[g]<=122)
		{
			oy[g]=oy[g]-32;
			printf("\b%c",oy[g]);
			Sleep(30);
		}
	}
		printf("\t\t\t\t");
			for(g=0;g<strlen(t);g++)
	{
		//system("color 3f");
	    printf("%c",t[g]);
		Sleep(30);
		if(t[g]>=97&&t[g]<=122)
		{
			t[g]=t[g]-32;
			printf("\b%c",t[g]);
			Sleep(30);
		}
	}
	printf("\n\n\n\n\n\n\t");
		for(g=0;g<strlen(u);g++)
	{
		//system("color 3f");
	    printf("%c",u[g]);
		Sleep(30);
		if(u[g]>=97&&u[g]<=122)
		{
			u[g]=u[g]-32;
			printf("\b%c",u[g]);
			Sleep(30);
		}
	}
	printf("\t\t\t\t");
		for(g=0;g<strlen(v);g++)
	{
		//system("color 3f");
	    printf("%c",v[g]);
		Sleep(30);
		if(v[g]>=97&&v[g]<=122)
		{
			v[g]=v[g]-32;
			printf("\b%c",v[g]);
			Sleep(30);
		}
	}
		//scanf("%d", &choice);
		ch=getch();
 	if(ch=='1')
 	{
 	system("cls");
 	goto x;
    }
 	else if(ch=='2')
 	{
 	system("cls");
 	goto a;
 }
 	else if(ch=='3')
 	{
 	system("cls");
 	goto b;
 }
 	else if(ch=='4')
 	{
 	system("cls");
 	goto c;
 }
 else
 	{
 	system("cls");
 goto y;
 }
		switch (choice)
		{
			x:
		case 1:
			system("color 5f");
			printf("\n\n\n\n\n\n\n\t\t\t");
			for(g=0;g<strlen(w);g++)
	{
		//system("color 3f");
	    printf("%c",w[g]);
		Sleep(30);
		if(w[g]>=97&&w[g]<=122)
		{
			w[g]=w[g]-32;
			printf("\b%c",w[g]);
			Sleep(30);
		}
	}
			printf("%0.2f Rs.", amount);
			Sleep(3000);
			system("cls");
			//printf("\n\n Press Any key to continue....\n\n");
			printf("\n\n\n\n\n\n\t\t\t");
				for(g=0;g<strlen(y);g++)
	{
		//system("color 3f");
	    printf("%c",y[g]);
		Sleep(30);
		if(y[g]>=97&&y[g]<=122)
		{
			y[g]=y[g]-32;
			printf("\b%c",y[g]);
			Sleep(30);
		}
	}
	        getch();
			break;
			a:
		case 2:
			//printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
				printf("\n\n\n\n\n\n\n\t\t\t");
			for(g=0;g<strlen(x);g++)
	{
		system("color 2f");
	    printf("%c",x[g]);
		Sleep(30);
		if(x[g]>=97&&x[g]<=122)
		{
			x[g]=x[g]-32;
			printf("\b%c",x[g]);
			Sleep(30);
		}
	}
	printf("\n\n\n\n\t\t\t\t\t");
			scanf("%d", &withdraw);
			system("cls");
		 if (withdraw >(amount-500))
			{
			printf("\a\a\a\a\a\a");
			printf("\n\n\n\n\n\n\n\t\t");
			
					for(g=0;g<strlen(l);g++)
	{
		system("color 4f");
	    printf("%c",l[g]);
		Sleep(30);
		if(l[g]>=97&&l[g]<=122)
		{
			l[g]=l[g]-32;
		//	printf("\a");
			printf("\b%c",l[g]);
			Sleep(30);
		}
	}
			Sleep(2000);	
	}
			else if (withdraw % 100 != 0)
			{
				printf("\a\a\a\a\a\a");
				printf("\n\n\n\n\n\n\n\t");
					for(g=0;g<strlen(i);g++)
	{
		system("color 4f");
	    printf("%c",i[g]);
		Sleep(30);
		if(i[g]>=97&&i[g]<=122)
		{
			i[g]=i[g]-32;
		//	printf("\a");
			printf("\b%c",i[g]);
			Sleep(30);
		}
	}
			Sleep(3000);
			//satyam=amount-500;		
	}
			else
			{
				amount = amount - withdraw;
				printf("\n\n\n\n\n\n\n\t\t\t");
					for(g=0;g<strlen(m);g++)
	{
		system("color 2f");
	    printf("%c",m[g]);
		Sleep(30);
		if(m[g]>=97&&m[g]<=122)
		{
			m[g]=m[g]-32;
			printf("\b%c",m[g]);
			Sleep(30);
		}
	}
			Sleep(2000);
			system("cls");
			printf("\n\n\n\n\n\n\t\t\t\t");
			for(g=0;g<strlen(n);g++)
	{
		system("color 2f");
	    printf("%c",n[g]);
		Sleep(30);
		if(n[g]>=97&&n[g]<=122)
		{
			n[g]=n[g]-32;
			printf("\b%c",n[g]);
			Sleep(30);
		}
	}
	printf("%0.2f Rs.",amount);
			Sleep(2000);
			
			}
			break;
			b:
		case 3:
		printf("\n\n\n\n\n\n\n\t\t\t   ");
					for(g=0;g<strlen(o);g++)
	{
		system("color 3f");
	    printf("%c",o[g]);
		Sleep(30);
		if(o[g]>=97&&o[g]<=122)
		{
			o[g]=o[g]-32;
			printf("\b%c",o[g]);
			Sleep(30);
		}
	}
		printf("\n\n\n\n\t\t\t\t\t");
			scanf("%d",&deposit);
            amount = amount + deposit;
            system("cls");
				printf("\n\n\n\n\n\n\n\t\t\t");
			for(g=0;g<strlen(p);g++)
	{
		system("color 3f");
	    printf("%c",p[g]);
		Sleep(30);
		if(p[g]>=97&&p[g]<=122)
		{
			p[g]=p[g]-32;
			printf("\b%c",p[g]);
			Sleep(30);
		}
	}
	printf("%0.2f Rs.",amount);
	Sleep(3000);
			break;
			c:
		case 4:
			printf("\n\n\n\n\n\n\n\n\t\t\t");
		for(g=0;g<strlen(h);g++)
	{
		system("color 1f");
	    printf("%c",h[g]);
		Sleep(30);
		if(h[g]>=97&&h[g]<=122)
		{
			h[g]=h[g]-32;
			printf("\b%c",h[g]);
			Sleep(30);
		}
	}
			exit(1);
		default:
				y:
 	//	printf("\n Invalid Option !! Please try Again...");
 		printf("\n\n\n\n\n\n\n\n\t\t\t");
 		printf("\a\a\a\a\a\a");
		for(g=0;g<strlen(q);g++)
	{
		system("color 4f");
	    printf("%c",q[g]);
		Sleep(30);
		if(q[g]>=97&&q[g]<=122)
		{
			q[g]=q[g]-32;
			//printf("\a");
			printf("\b%c",q[g]);
			Sleep(30);
		}
	}
	Sleep(3000);
	system("cls");
 		break;
		}
		system("cls");
		//printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
		printf("\n\n\n\n\n\n\n\n\t\t\t");
		for(g=0;g<strlen(z);g++)
	{
		system("color 8f");
	    printf("%c",z[g]);
		Sleep(20);
		if(z[g]>=97&&z[g]<=122)
		{
			z[g]=z[g]-32;
			printf("\b%c",z[g]);
			Sleep(20);
		}
	}
		fflush(stdin);
		ch=getch();
		if(ch=='n'||ch=='N')
		return;
}
}
