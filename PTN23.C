#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,i,j;
	char ch='A';
	clrscr();
	for(i=n;i>=1;i--)
	{
		ch='A';
		for(j=1;j<=i;j++)
		{
			printf(" %c",ch++);
		}
		printf("\n");
	}
	getch();
}
