/*
	Author:Rajvi;
	Doc:24-07-2026;
	object: cube;
*/
#include<stdio.h>
#include<conio.h>
void cube(int *p,int n);
void main()
{
	int arr[10][10],n,i,j;
	clrscr();
	printf("\nEnter array size :\n");
	scanf("%d",&n);
	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	cube(&arr[0][0],n);
	getch();
}

void cube(int *p,int n)
{
	int i,j;
	int *q;
	printf("\nCubes of all elements :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			q=&p[i*n+j];
			printf("%d\t",(*q)*(*q)*(*q));

		}
		printf("\n");
	}

}