#include<stdio.h>

int factorial(int n){//recursion for finiding factorial
    int fact=1;
    if(n==1){
        return 1;
    }
else
    return fact = n *factorial(n-1);
}
int main(){
    int number ;
    printf("Enter the number : ");
    scanf("%d",&number);

    printf("%d",factorial(number));
    return 0;

    
}