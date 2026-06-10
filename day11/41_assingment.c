// Q41 Write a program to Write function to find sum 
// of two numbers.

#include<stdio.h>
void sum(int a , int b){// sum function

    printf("the sum of %d and %d is %d",a,b,a+b);

    
}

#include<stdio.h>
int main(){

    int number1 , number2 ;

printf("Enter the number1 and number2 : " );
scanf("%d%d",&number1,&number2);

sum (number1,number2);

    return 0;
}