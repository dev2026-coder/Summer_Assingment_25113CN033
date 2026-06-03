// Q19 Write a program to Print factors of a number.

#include<stdio.h>
int main(){

    int number ;

    printf("Enter the number : ");
    scanf("%d",&number);

    for (int i=1;i<=number/2;i++){
        if(number%i==0){//condition for factors
            printf("%d  ",i);
        
    }
    }
    return 0;
}