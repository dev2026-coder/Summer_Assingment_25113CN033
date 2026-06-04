// Q22 Write a program to Convert binary to decimal. 

#include<stdio.h>
int main(){
    int digit,decimal=0;
    printf("The number of digits in Binary_number : ");
    scanf("%d",&digit);

    int Binary_number[digit];
   
//input of binary number
    for(int i =0;i<digit;i++){
    printf("Enter the binary_digits : ");
    scanf("%d",&Binary_number[i]);
    }
// loop converting binar ==> decimal
    int power = 1;
    for(int i = digit-1; i >= 0; i--){
        decimal += Binary_number[i] * power;
        power *= 2;
    }

     printf("%d",decimal);

return 0;
}
