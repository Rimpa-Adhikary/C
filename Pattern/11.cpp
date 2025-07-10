//pattern 18
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("Enter no. ");
	scanf("%d",&n);
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=r;c++)
			printf(" ");
		for(c=1; c<=n-r-1; c++)
			printf(" :)");
		printf("\n");
	}
	return 0;
}
