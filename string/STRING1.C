/*
	Author:Rajvi;
	doc:15/07/2026;
	object:Palindrome.
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	char myname[50];
	int i,length=0,flag=1;
	clrscr();
	printf("Enter string ==> ");
	scanf("%s",myname);
	for(i=0;myname[i]!='\0';i++)
	{
		length++;
	}

	for(i=0;i<length/2;i++)
	{
		if(myname[i]!=myname[length-1-i])
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\n\n\tThat string is a Palindrom.");
	}
	else
	{
		printf("\n\n\tThat string is Not a Palindrom");
	}
	getch();
}


