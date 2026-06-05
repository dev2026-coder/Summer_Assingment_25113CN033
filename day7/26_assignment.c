// Q26 Write a program to Recursive Fibonacci. 

#include<stdio.h>
int fibonacci(int n){
    if(n<=2){
        return 1;
    }
else{
    return fibonacci (n-1)+fibonacci(n-2);
}   
}

int main(){

    int term ;
    printf("Enter the term of fibonacci : ");
    scanf("%d",&term);

    printf("the %dth term of fibonacci is %d",term,fibonacci(term));



    return 0;
}