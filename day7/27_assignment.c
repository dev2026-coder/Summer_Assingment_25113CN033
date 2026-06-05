// Q27 Write a program to Recursive sum of digits. 
#include<stdio.h>


int sum_digit(int n){
    int sum=0;
    if (n==0){
        return 0;
    }
    else{
       return sum = n%10 + sum_digit(n/10);
      
    }
}

int main(){

    int number ;
    printf("Enter the  number : ");
    scanf("%d",&number);

    printf("%d is the sum of digits of %d",sum_digit(number),number);


    return 0;
}