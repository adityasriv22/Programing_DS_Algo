#include <stdio.h>
int main()
{
	int n,i,j;
	printf("What should be the length of the array\n");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d",arr[i]);
	}
	return 0;
}
//Complexity O(n) fastest for reversing