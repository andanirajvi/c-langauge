/*
	Author:Rajvi;
	doc:4-07-2026;
	object:	5
		4 4
		3 3 3
		2 2 2 2
		1 1 1 1 1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
}