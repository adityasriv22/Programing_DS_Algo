#include <stdio.h>
void main(){
	int n;
	printf("Enter the number to compute its factorial\n");
	scanf("%d",&n);
	int f;
	f=factorial(n);
	printf("The factorial is : %d\n",f );
}
int factorial(int a){
	if(a<1){
		return 1;
	}
	else{
	a=a*factorial(a-1);
	
	return a;
}}