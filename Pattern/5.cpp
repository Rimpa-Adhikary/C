//pattern 12
#include<stdio.h>
int main()
{
	int n,r,c,i=1;
	printf("Enter NO. of rows and cols :");
	scanf("%d",&n);
	for(r=0;r<=n;r++)
	{
		for(c=0;c<=r;c++)
		{
			printf("%d ",i*i);
			i++;
		}
		printf("\n");
	}
	return 0;
}
