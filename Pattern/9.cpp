
//pattern16
#include<stdio.h>
int main()
{
	int r,n,c;
	printf("Enter NO : ");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(c=1;c<r;c++)
			printf(" ");
		for(c=1;c<=n-r+1; c++)
				printf("*");
		printf("\n");
	}
	return 0;
}
