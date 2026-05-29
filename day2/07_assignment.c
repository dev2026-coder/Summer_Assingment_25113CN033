#include<stdio.h>
int main (){
int number,prdt=1,rem;


    printf("enter a number : ");
    scanf("%d",&number);
if (number==0){
    printf("the product of the digit is zero");
}

    else{
while (number>0){

    rem = number%10;
    prdt *= rem;
    number = number/10;


}
printf("the product of digit is %d",prdt);
}  
}