#include<stdio.h>

int fib(int num){
	if (num == 1)
		return 0;
	else if (num == 2 || num == 3)
		return 1;
	else
		return (fib (num-1)+fib(num-2));
}

int main(){
	int i=0,n, count;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	for(count = 1; count <=n; count++){
		printf("%d ", fib(count));
		//i++;
	}
	printf("\n");
return 0;
}
