#include<stdio.h>
#include<math.h>
int main (){

    int  rem,number,rev=0;

    printf("enter the number : ");
    scanf("%d",&number);


    while (number>0){
        rem = number%10;
        rev = rev*10 + rem;
        number = number/10;
        
    }

    printf("\nreverse of the number is %d ",rev);
    return 0;
}