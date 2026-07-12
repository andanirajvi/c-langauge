#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[100][100];
	int row,col,i,j,r,c,sum=0;
	clrscr();
	printf("Enter row size :");
	scanf("%d",&row);
	printf("Enter column size :");
	scanf("%d",&col);
	printf("Enter array elements:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf(" %d",&arr[i][j]);
		}
	}

	printf("\nEnter row number :");
	scanf("%d",&r);
	sum=0;
	printf("Elements of row %d :",r);
	for(j=0;j<col;j++)
		{
			printf(" %d",arr[r][j]);
			sum +=arr[r][j];
		}
		printf("\nSum of column %d =%d\n",r,sum);

	printf("\nEnter column number :");
	scanf(" %d",&c);
	sum=0;
	printf("Elements of column %d :",c);
	for(i=0;i<row;i++)
	{
		printf(" %d",arr[i][c]);
		sum +=arr[i][c];
	}
	printf("\nSum of column %d = %d\n",c,sum);
	getch();
}