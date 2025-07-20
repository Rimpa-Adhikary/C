//bubble sort
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no. of elemnets to sort :");
	scanf("%d",&n);
	int arr[n];
	//array element
	printf("Enter elements:\n");
	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);
	//sorting process
	for(i=0;i<n-1;i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]<arr[j+1])
			{
				int temp= arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("After Bubble sort:");
	for(i=0; i<n; i++)
		printf("%d\t",arr[i]);
	return 0;
}
