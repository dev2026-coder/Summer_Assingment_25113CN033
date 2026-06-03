// Q18 Write a program to Check strong number. 

#include<stdio.h>

int factorial(int a){//factorial function
    int fact=1;
for (int i =2;i<=a;i++){
    fact *= i;
}
return fact;
}

int main(){

int number,sum=0,digit,number_copy;

printf("Enter the number : ");
scanf("%d",&number);
number_copy=number;
while(number>0){

    digit = number%10;
    sum += factorial(digit);//strong number condition
    number = number/10;
}
    if (number_copy == sum ){

    printf(" %d is the strong number",number_copy);
    }
    else{
        printf(" %d is the not the strong number",number_copy);
    }

    return 0;
}