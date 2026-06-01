// Q12 Write a program to Find LCM of two numbers.

#include<stdio.h>
int main(){

    int number1 ,number2,greatest_number,lcm=1;

    printf("Enter the numbers to find their lcm : ");
    scanf("%d%d",&number1,&number2);

    if (number1 > number2){
    greatest_number = number1;
}
else{
    greatest_number = number2;
}


    for(int i =2 ; i<=greatest_number;i++ ){

        while((number1%i==0)||(number2%i==0)){// by prime factorization method 

            lcm *= i;
        
            if (number1%i==0){
            number1 = number1/i;}

            if (number2%i==0){
                    number2 = number2/i;}
        }

      if (number1 > number2){
    greatest_number = number1;
}
else{
    greatest_number = number2;
}
    }

printf("the lcm for numbers  is %d",lcm);
return 0;
}