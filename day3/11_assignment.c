// Q11 Write a program to Find GCD of two numbers.

#include<stdio.h>
int main (){

    int number1,number2,GCD=1,smallest_number ;

    printf("enter the numbers to find their GCD : ");
    scanf("%d%d",&number1,&number2);

    if(number1>number2){
        smallest_number= number1;
    }
    else{
        smallest_number = number2;
    }

    for(int i =2;i<=smallest_number;i++){
        if ((number1%i == 0) && (number2%i == 0)){
            GCD = i;// since the iterartion is ini iinincreasing thats why heighest divisible number will assign
        }

    }


printf("the GCD of %d and %d is %d ",number1,number2,GCD);



return 0;
}