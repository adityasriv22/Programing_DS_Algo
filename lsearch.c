#include <stdio.h>
int main()
{
	int a,n,i;
	printf("What should be the length of the array\n");
	scanf("%d",&n);
	printf("What element are you looking\n");
	scanf("%d",&a);
	int arr[n];
	for (i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);}
	for (int i = 0; i < n-1; i++)
		{
			
			
		if(arr[i]==a){
			printf("This is the element at %d",arr[i]);
		}
	}
}