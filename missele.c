//Finding the missing element from the array, sort the origional array and compare the origional and input array
#include <stdio.h>
#include <stdlib.h>
void main(){
	int i,sumofnnum,n,sum=0,miss;
	
	printf("Enter the number of elements to enter in the array\n");
	scanf("%d",&n);
	int arr[n];
	int v=n+1;
	sumofnnum=(v*(v+1))/2;
	printf("natural sum is %d",sumofnnum);// sum of n natural numbers 
	for(i=1;i<=n;i++){//actual array
		scanf("%d",&arr[i]);
		
	
		sum=sum+arr[i];
	}
	printf("sum is %d\n",sum );
	miss=sumofnnum-sum;
	printf("The missing element is: %d	",miss);
	}
//Complexity is O(n)