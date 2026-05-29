#include<stdio.h>
#include<math.h>
int main (){

    int  rem,number1,rev=0,number2;

    printf("enter the number1 : ");
    scanf("%d",&number1);

    number2 = number1;

    while (number1>0){
        rem = number1%10;
        rev = rev*10 + rem;
        number1 = number1/10;
        
    }

if(rev == number2){
        printf("the number is palindrome");
    }
else{
    printf("\nreverse of the number1 is %d ",rev);
}

    return 0;
}