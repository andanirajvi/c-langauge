#include<stdio.h>
#include<conio.h>
void main()
{
	char str[50];
	char *p;
	int length=0;
	clrscr();
	printf("Enter String :");
	scanf("%s",str);
	for(p=str;*p!='\0';p++)
	{
		length++;
	}
	printf("The length of a string is : %d",length);
	getch();
}