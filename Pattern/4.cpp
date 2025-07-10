//pattern 11
#include<stdio.h>
int main()
{
	int n,r,c;
	printf("Enter number of rows & cols :");
	scanf("%d",&n);
	int i=0;
	for(r=0;r<=n;r++)
	{
		for(c=0;c<=r;c++)
		{
			if(r%2==0)
				printf("%d",i);
			else
				printf("%d",i+1);
		}
		printf("\n");
	}
	return 0;
}
