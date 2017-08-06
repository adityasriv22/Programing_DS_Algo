#include <stdio.h>
void main()
{
	int prev;//previouly read integer
	int curr;//currently read integer
	int len=0;//length of curr subsequence
	int maxlen=0;
	scanf("%d",&prev); //input the first number in the sequence
	if(!(prev== -1))//check if input is not -1
	{
		len=1;//length of current increasing subsequence is 1
		maxlen=1; 
		scanf("%d",&curr);
		while(curr != -1){


		if (curr > prev){
			len=len+1;//increase the subsequence
		}
		else{
			if(maxlen<len){
				maxlen=len;
			}
			len=1;//reset the subsequence
		}
		prev=curr;//always do this
		scanf("%d",&curr);//read next int
	}
		if(maxlen<len){
				maxlen=len;
			}
	printf("%d",maxlen );}

}