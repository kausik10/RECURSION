// Online C compiler to run C program online
#include <stdio.h>


int gcd(int n1, int n2){
    
    if(n2!=0){
        return gcd(n2,n1%n2);
    }
    else{
        return n1;
    }
}
int main() {
    int num1, num2;
    printf("Enter two numbes: ");
    scanf("%d,%d",&num1,&num2);
    
    printf("GCD: %d", gcd(num1,num2));
    return 0;
}
