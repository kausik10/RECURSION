#include<stdio.h>

int gcd(int num1, int num2)
{
	if (num1 == 0){
		return num2;
	}
	if (num2 == 0){
		return num1;
	}
	if (num1 > num2){
		return gcd(num1%num2, num2);
	}
	else{
		return gcd(num2%num1, num1);
	}
	
}

int main(){

	int a, b;
	printf("Enter two numbers two find GCD (a,b): ");
	scanf("%d,%d", &a, &b);
	
	printf("The GCD of %d and %d is: %d\n", a, b, gcd(a,b));
	
	return 0;
}
