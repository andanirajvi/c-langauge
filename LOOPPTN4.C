/*
	Author:Rajvi;
	doc:6-07-2026;
	object:	5 4 3 2 1
		5 4 3 2
		5 4 3
		5 4
		5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=6-i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}
