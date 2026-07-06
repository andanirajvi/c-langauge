/*
	Author:Rajvi;
	doc:5-07-2026;
	object:	     1 1 1 1 1
		     2 2 2 2
		     3 3 3
		     4 4
		     5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}
