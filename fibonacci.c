#include<stdio.h>
void main(){
	int a=0,b=1;
	int c;
	int num,rem;
	int cube=0;
	int n;
	printf("Enter the limit till you want to print the fibonacci series\n");
	scanf("%d",&n);
	printf("The fibonacci series is \n");
	printf("\n");
	for(int i=0;i<=n;i++)
	{
		c=a+b;
		a=b; //Increment the value of a
		b=c; //increment the value of b
		printf("%d\n",c);
}
	printf("\n");
	
	printf("Enter a number to check if armstrong or not: \n");
	scanf("%d",&num);
	int temp=num;
	int temp1=num;
	while(num != 0){
		rem=num % 10;
		cube=cube+(rem*rem*rem);
		num=num/10;

}
printf("\n");
	if(temp == cube){
		printf("Its Armstrong !!\n");
	}
	else{
		printf("No Its not\n");
	}
	int sum=0;
while(temp1 !=0 )
{
	rem=temp1%10;
	sum=sum+rem;
	temp1=temp1/10;

}
printf("\n");
printf("The sum of digits is : %d ",sum);
}


