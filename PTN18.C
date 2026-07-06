/*
	Author:Rajvi;
	doc:6-07-2026;
	object:	41
		41 42
		41 42 43
		41 42 43 44
		41 42 43 44 45
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i,j;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",40+j);
		}
		printf("\n");
	}
	getch();
}
