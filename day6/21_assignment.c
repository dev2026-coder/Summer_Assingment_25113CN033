// Q21 Write a program to Convert decimal to binary. 

#include<stdio.h>
int main(){

    int number,count=0,i=0;
    int binary_number[25];
    printf("Enter the number : ");
    scanf("%d",&number);

    while(number>0){//loop for storing binary numbers in array
  
        binary_number[i] = number%2;
        number=number/2;
        count++;
        i++;
    }

    for(int i=0;i<count;i++){
        printf("%d",binary_number[i]);
    }
    return 0;
}