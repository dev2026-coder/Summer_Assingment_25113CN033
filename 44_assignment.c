// Q44 Write a program to Write function to find 
// factorial. 
#include<stdio.h>
void factorial(int a ){// factorial function
int fact = 1;
    for(int i =2;i<=a;i++){
    fact*=i;
    }

printf("The factorial of %d is %d",a,fact);
}


int main(){

    int number;
    printf("Enter the number : ");
    scanf("%d",&number);

    factorial(number);

    return 0;
}