#include <stdio.h>
int main(){

int fact=1 ,number;

printf("enter the number : ");
scanf("%d",&number);

    for (int i =1; i<=number;i++ ){

        fact *= i;

    }

    printf("factorial of %d is %d",number,fact);
    return 0;
}
