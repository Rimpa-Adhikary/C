//pattern 13
#include<stdio.h>
int main()
{
	int n,r,i,j;
	printf("Enter NO. of rows and cols :");
	scanf("%d",&n);
	for(r=0;r<=n;r++)
	{
		for(i=0;i<=n-r; i++)
			printf(" ");
		for(j=0;j<=r; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
