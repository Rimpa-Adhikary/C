//using do-while loop
#include<stdio.h>
int main()
{
	int n,i=1,ans=1;
	printf("Enter number :");
	scanf("%d",&n);
	do
	{
		ans*=i;
		++i;
	}
	while(i<=n);
	printf("factorial of the number : %d",ans);
return 0;
}
