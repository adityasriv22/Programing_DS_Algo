#include <stdio.h>
void check(int a,int s)
{
	while(!(a==1))
	{
		s += a;
		printf("%d",a );
		scanf("%d",&a);//now a is changed
	}
	printf("%d",s);
}
void main()
{
	int a;
	scanf("%d",&a); //a number is getting into memory
	
	int s;
	s=0;
	check(a,s);
	
	
}
