//pattern 15
#include<stdio.h>
int main()
{
	int n,r,c=65,i,j;
	printf("Enter No. :");
	scanf("%d",&n);
	for(r=1; r<=n; r++)
	{
		for(i=1;i<=n-r;i++)
		printf(" ");
		for(j=1; j<=r; j++)
		{
			printf("%c ",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
