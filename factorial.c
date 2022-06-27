#include<stdio.h>
int factorial(int);

int main(){
	int num, fact;
	printf("Enter a number for facrorial: ");
	scanf("%d", &num);
	
	fact = factorial(num);
	printf("The factorial of %d is %d", num, fact);
}

int factorial(int num)
{
	if (num==0){
		return 1;
	}
	else if(num >= 1){
		return num*factorial(num-1);
	}	
}
	
