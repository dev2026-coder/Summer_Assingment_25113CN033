// Q28 Write a program to Recursive reverse number.

#include<stdio.h>

int reverse(int n,int rev){
    if(n==0){
        return rev;
    } 
    else{
        return reverse(n/10,rev*10+n%10);
    }
}
int main(){
    int number;

printf("Enetr the number : ");
scanf("%d",&number);

printf("Reverse of the number %d is %d",number,reverse(number,0));

    return 0;
}