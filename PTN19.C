#include<stdio.h>
#include<conio.h>
void main()
{
	int r=5,num=11,i,j;
	clrscr();
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
	getch();
}