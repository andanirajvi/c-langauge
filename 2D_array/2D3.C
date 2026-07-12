/*
	Author:Rajvi;
	doc:10-07-2026;
	object:2d array;
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,j,i,arr[10][10],arr1[10][10];
	clrscr();
	printf("Enter row  size: ");
	scanf("%d",&r);

	printf("Enter  col size: ");
	scanf("%d",&c);

	printf("Enter elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d] =",i,j);
			scanf("%d",&arr[i][j]);
			arr1[j][i]=arr[i][j];
		}
	}

	printf("\n Matrix Array 1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}

	printf("\nTranspose Matrix Array 2:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	getch();
}

