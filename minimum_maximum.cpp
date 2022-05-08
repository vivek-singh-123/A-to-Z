#include<stdio.h>
int main()
{
	int arr[10],i,min,max;
	printf("Enter element of array:\n");
	for(i=0; i<10; i++)
	{
	scanf("%d",&arr[i]);
    }
	max=min=arr[0];
	for(i=1; i<10; i++)
	{
		if(arr[i]>max)
		max=arr[i];
		
		if(arr[i]<min)
		min=arr[i];
	}
	printf("\n maximum is %d",max);
	printf("\n minimum is %d",min);
	
	return 0;
	
}
