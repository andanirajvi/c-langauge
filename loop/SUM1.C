#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,odd=0,even=0;
    clrscr();
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       if(i%2==0)
	   even=even+i;
	else
	   odd=odd+i;
    }
    printf("sum of even numbers=%d\n",even);
    printf("sum of odd numbers=%d",odd);
    getch();
}

