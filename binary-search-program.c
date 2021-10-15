#include <stdio.h>
void main()
{
	int a[30],key,low=0,high,mid,i,n,found;
	printf("enter the size of array elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter a key to search\n");
	scanf("%d",&key);
	low=0;
	high=n-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("key is found at the position %d\n",mid+1);
			break;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}	
}
