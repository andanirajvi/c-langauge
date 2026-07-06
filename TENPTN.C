/*
	Author:Rajvi;
	doc:4-07-2026;
	object:	1 2 3 4 5
		2 3 4 5
		3 4 5
		4 5
		5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n=5;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	getch();
}

