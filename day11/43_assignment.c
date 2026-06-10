// Q43 Write a program to Write function to check 
// prime. 

#include<stdio.h>

void check_prime(int a){
int count =0;
    for(int i = 2;i<=a/2;i++){

        if(a%i==0){
            count++;
            break;
        }
    }
      if(count==0){
        printf("%d is a prime number",a);
      }  
      else{
        printf("%d is not a prime_number",a);
      }
    }



int main(){
int number;
    printf("enter a number : ");
    scanf("%d",&number);

    check_prime(number);

    return 0;

}