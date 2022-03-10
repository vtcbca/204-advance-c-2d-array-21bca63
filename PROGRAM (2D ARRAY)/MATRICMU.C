#include<stdio.h>
#include<conio.h>
void main()
{
	int s1[3][3],s2[3][3],i,j,k;
	int mul[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value s1[%d]s[%d]:",i,j);
			scanf("%d",&s1[i][j]);
		}

	}
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			printf("%d\t",s1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the value s[%d]s[%d]:",i,j);
			scanf("%d",&s2[i][j]);
		}

	}
	for(i=0;i<3;i++)
	{

		for(j=0;j<3;j++)
		{
			printf("%d\t",s2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(k=1;k<=3;k++)
			{
				mul[i][j]=mul[i][j]+s2[i][k]*s2[k][j];
			}
		}
		printf("\n");
	}
	printf("\n-------------------------------\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("\t %d",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}



