#include<stdio.h>
#include<conio.h>
void main()
{
	int n=5,num=1 ,i,j;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",num);
		}
		printf("\n");
		num+=2;
	}
	getch();
}
