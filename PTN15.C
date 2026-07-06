/*
	Author:Rajvi;
	doc:6-07-2026;
	object:	1                 1
		1 2             2 1
		1 2 3         3 2 1
		1 2 3 4     4 3 2 1
		1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}