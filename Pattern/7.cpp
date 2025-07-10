//pattern 14
#include<stdio.h>
int main()
{
	int n,r,c,i,j;
	printf("Enter No. :");
	scanf("%d",&n);
	for(r=1; r<=n; r++)
	{
		for(i=1;i<=n-r;i++)
		printf(" ");
		for(j=1; j<=r; j++)
			printf(" %d",j);
		printf("\n");
	}
	return 0;
}
