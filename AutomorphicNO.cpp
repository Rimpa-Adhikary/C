//Automorphic number--: if & only if its square ends in the same digits as the number itself
#include<stdio.h>
int main()
{
	int num,count=0,sq=1,rem,rev=0,lst=0;
	printf("Enter number to check Automorphic or not :");
	scanf("%d",&num);
	int n=num;
	while(n!=0)					//count the digit of number
	{
		count++;
		n/=10;
	}
	printf("\nNo. of digits in the number :%d",count);
	sq=num*num;					//square of number
	printf("\nsquare of the number:%d\n",sq);
	for(int i=0; i<count; i++)	//digits of square
	{
		rem=sq%10;
		printf("%d",rem);
		lst= lst*10+rem;
		sq/=10;	}
	int flag=lst,maybe;			//reverse last digit
	while(lst!=0){
		maybe=lst%10;
		rev=rev*10+maybe;
		lst/=10;
	}
	printf(" rev no of %d is %d",flag,rev);
	if(rev==num)
		printf("\n%d is an Automorphic number",num);
	else
		printf("\n%d is not an Automorphic number",num);
	return 0;
}
