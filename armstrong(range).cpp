//armstrong number within range
#include<stdio.h>
int main()
{
	int a,b,temp,count,sum,rem,pow;
	printf("For Armstrong No., Enter lower and upper range :");
	scanf("%d\n%d",&a,&b);
	printf("Armstrong number  No. between range :");
   for(int n=a; n<=b; n++)			//range set
   {
  	temp =n;
  	count=0;
  	sum=0;
  	while(temp!=0)					//count the no. of digit
	{
  		count++;
  		temp/=10;
	}
		temp =n;
	while(temp!=0){
		rem=temp%10;
		pow=1;
		for(int i=0; i<count;i++){		//power calculation
			pow*=rem;
		}
		sum+=pow;
		temp/=10;	
   		}
   	if(n==sum)
   		printf("%d ",n);
}
	return 0;
}
