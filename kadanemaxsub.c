//In Case of Contiguous Sub Array, find the incrasing subsequence and calculate the sum of that subsequence
//KADANE"S ALGORITHM
#include <stdio.h>
void main()
{
		int array[300],len,i,max_ending_here=0,max_so_far=0;
		printf("Enter the number of numbers to enter in the array\n");
		scanf("%d",&len);
		for(i=0;i<len;i++)
		{
			scanf("%d",&array[i]);
		
			max_ending_here=max_ending_here+array[i];
			if(max_ending_here < 0){
				max_ending_here=0;
			}
			else if(max_so_far<max_ending_here){
				max_so_far=max_ending_here;
			}
		}
		printf("Maximum Sum of a subarray is %d",max_so_far);

	}

//if all the elements are -ve
/*
initialize max_so_far=a[0], this was previously max_ending_here
			curr_maxx=a[0], this was previously max_so_fatr
			for(int i=1; i<len;i++)
			{
				curr_maxx=max(a[i],cur_maxx+a[i]);
				max_so_far=max(max_so_far,curr_max);
			}
*/