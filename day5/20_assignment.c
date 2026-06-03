// Q20 Write a program to Find largest prime factor. 

#include<stdio.h>
int main (){

    int number ,count =0,prime_factor;

    printf("Enter the number : ");
    scanf("%d",&number);

    for(int i=2; i<=number/2;i++){//loop for finding divisible number;
        for(int j=2;j<=i/2;j++){//loop to pick up prime numbers
            if (i%j==0){
                count++;
            }
        }
            if (count==0){//condition for number is prime
                if (number%i==0){//condition for prime number devides entered number
                    prime_factor=i;// saving divisible prime number
                }
            }
            // restoring variable
            count = 0;

        }
        printf("%d is the lagest prime factor of %d",prime_factor,number);
        return 0;
    }
