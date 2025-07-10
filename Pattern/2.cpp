#include<stdio.h>
int main()
{
	//pattern 5
	int n,r,c;
	printf("Enter line no :");
	scanf("%d",&n);
	for(r=1; r<=n; r++)
	{
		for(c=1; c<=r; c++)
		{
			printf("%d",c-1);
		}
		printf("\n");
	}
	return 0;
}
