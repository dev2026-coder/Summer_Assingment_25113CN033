// Q15 Write a program to Check Armstrong number.
   
#include<stdio.h>
#include<math.h>
int main(){

    int number,count=0, armstrong_number=0,number_copy,rem,result = 1;


    printf("Enter the number : ");
    scanf("%d",&number);

    number_copy=number;

    while(number>0){
      
        number=number/10;
        count++;

    }

    number = number_copy;


    for (int i = 1;i<=count;i++){// loop to check the armstromng number
    rem = number_copy%10;
    for(int j =1;j<=count;j++){// loop to perform power operation 
        result *= rem;
    }
    armstrong_number +=result;
    result = 1;
    number_copy = number_copy/10;
}
if (number==armstrong_number){

    printf("this is an armstrong_number");
}
else{
    printf("the is not armstrong_number");
}
return 0;
}