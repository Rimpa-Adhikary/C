#include<stdio.h>
int main()
{
	int num,i,ans,rem,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	int n=num;
	printf("digit of the number :");
	while(num>0)
	{
		rem=num%10;
		printf("%d ",rem);
		i=1;
		ans=1;
		while(i<=rem)
		{
			ans*=i;
			i++;
		}
		sum +=ans;
		num/=10;
	}
	printf("\nsum of the digits =%d\n",sum);
	if (n==sum)
		printf("It's a strong number");
	else
		printf("It's not a strong number");
return 0;
}
