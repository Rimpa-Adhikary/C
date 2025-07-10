#include<stdio.h>
int main()
{
	int n,r,c;	//pattern 6
	printf("Enter line no for pattern1:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1; c<=n-r+1; c++)
			printf("%d",r);
		printf("\n");
	}
	//pattern 7
	int n1;
	printf("Enter line no for pattern2:");
	scanf("%d",&n1);
	for(r=1;r<=n1;r++)
	{
		for(c=1; c<=n1-r+1; c++)
			printf("%d",c);
		printf("\n");
	}
	//pattern 8
	int n2;
	printf("Enter line no for pattern3:");
	scanf("%d",&n2);
	for(r=1;r<=n2;r++)
	{
		for(c=1; c<=n2-r+1; c++)
			printf("%d",n2-r+1);
		printf("\n");
	}
	//pattern 9
	int n3;
	printf("Enter line no for pattern4:");
	scanf("%d",&n3);
	for(r=1;r<=n3;r++)
	{
		for(c=1; c<=n3-r+1; c++)
			printf("%d",n3-c+1);
		printf("\n");
	}
	//pattern 10
	int n4;
	printf("Enter line no for pattern5:");
	scanf("%d",&n4);
	for(r=1;r<=n4;r++)
	{
		for(c=1; c<=n4-r+1; c++)
			printf("%c",75-r);
		printf("\n");
	}
	return 0;
}
