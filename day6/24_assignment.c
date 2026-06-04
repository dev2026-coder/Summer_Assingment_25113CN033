// Q24 Write a program to Find x^n without pow(). 

#include<stdio.h>
int main(){

    int base , power,answer=1;

    printf("Enter the base : ");
    scanf("%d",&base);
    printf("Enter the power : ");
    scanf("%d",&power);

    for(int i =1;i<=power;i++){
        answer *=base;
    }
    printf("%d raise to power %d is %d",base,power,answer);
    return 0;
}