//====================PATTERN PROBLEMS=============
#include<stdio.h>
int main()
{
	//pattern 1
	int n;
	char c;
	printf("For Pattern, Enter No. of lines:");
	scanf("%d",&n);
	for(int r=1; r<=n; r++)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%c ",70-r);
		}
		printf("\n");
	}
	//pattern 2
	int n1;
	char ch;
	printf("For Pattern, Enter No. of lines:");
	scanf("%d",&n1);
	for(int r=1; r<=n1; r++)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%c ",64+c);
		}
		printf("\n");
	}
	//pattern 3
	int n2,num;
	printf("For Pattern, Enter No. of lines:");
	scanf("%d",&n2);
	for(int r=1; r<=n2; r++)
	{
		for(int c=1; c<=r; c++)
		{
			printf("%d ",num+c);
		}
		printf("\n");
	}
	//pattern 4
	int n3;
	printf("For Pattern, Enter No. of lines:");
	scanf("%d",&n3);
	for(int r=0; r<=n3; r++)
	{
		for(int c=0; c<=r; c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
