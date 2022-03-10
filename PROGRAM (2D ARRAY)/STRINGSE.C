#include<stdio.h>
#include<conio.h>
void main()
{
	char name[5][10],s[10];
	int i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter a string name=");
		gets(name[i]);
	}
	printf("\n Enter the number to search:");
	gets(s);
	for(i=0;i<5;i++)
	{
		if(strcmp(s,name[i]==0))
		{
			printf("Name IS avaialble at %d position",s[i]);
			break;
		}
	}
	if(i==5)
		printf("\n Sorry Name is not available here");
	getch();
}
