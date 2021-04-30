#include<stdio.h>
int main()
{
	system("color 6f");
	int i,j;
	char string[]="Satyam Tripathi";
	printf("\n\n\n\n");
	printf("\t\t\t-----------------\n");
	for(i=1;i<=14;i++)
	{
	printf("\t\t\t|%-15.*s|\n",i,string);
	}
	printf("\t\t\t|---------------|\n");
	for(i=14;i>=1;i--)
	{
	printf("\t\t\t|%-15.*s|\n",i,string);
}
	printf("\t\t\t-----------------\n");
	
}
