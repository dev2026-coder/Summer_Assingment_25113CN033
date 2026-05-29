#include<stdio.h>
int main (){

int number1,reminder,sum =0,number2;


printf("Enter a number1 : ");
scanf("%d",&number1);
number2 = number1;

while(number1>0){
 reminder = number1%10;
 sum = sum + reminder;
 number1 = number1/10;

}
printf("The sum of digits of %d is %d",number2,sum);
return 0;

}