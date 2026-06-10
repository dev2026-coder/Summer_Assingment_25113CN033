// Q42 Write a program to Write function to find 
// maximum
#include<stdio.h>

void max(int a ,int b){// find max function

    if(a>b){
        printf("%d > %d",a,b);
    }
    else{
        printf("%d>%d",b,a);
        }
    
}


int main(){
int number1 ,number2;
    printf("Enter the two numbers : ");
    scanf("%d%d",&number1,&number2);
    
    max(number1,number2);

    return 0;
}