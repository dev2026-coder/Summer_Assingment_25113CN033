//Q9 Write a program to Check whether a number is prime. 

#include<stdio.h>
int main (){

    int number, count=0;

    printf("Enter a number : ");
    scanf("%d",&number);

    if ((number == 0)||(number == 1)){// condition for 0 or 1 
        printf(" %d is not prime number",number);
    }
else{
    for(int i=2;i<=number/2;i++){

        if (number%i==0){// condition for a number if it is prime
            count++;
            break;
        }
    }
    if (count==0){
            printf("%d is a prime number",number);
            
        }
    else{
            printf("%d is not a prime number",number);
           
        }
}
    return 0;
}
