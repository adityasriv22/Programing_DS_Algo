#include <stdio.h>
int main()
{
	int n,i,j;
	printf("What should be the length of the array\n");
	scanf("%d",&n);
	int arr[n],arr1[n];
	for (i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	printf("-----\n");
	for (i=0;i<=n;i++){
		arr1[i]=1;

	}
	/*	For checking the elements in the array
	for (i = 0; i < n-1; i++)
	{
		printf("%d\n",arr[i]);
		
	}
	*/
	printf("-------\n");
	for(i=0;i<n-1;i++){
		printf("%d\n",arr1[i]);
	}
	
	//int count=0;
	for (i=0;i<=n-1;i++)
	{
		for (j=i+1;j<=n-1;j++)
		{
			if(arr[i]==arr[j]){
				printf("+_+_+_\n");
				printf("%d\n",arr[i]);

		}
	
		
		}
		
	}
	printf("------\n");
	//printf("The count of numbers repeated: %d",count);
	printf("*****\n");
	

return 0;
}
//Complexity O(n) fastest for reversing