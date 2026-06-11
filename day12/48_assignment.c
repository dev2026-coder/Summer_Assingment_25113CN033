// Q48 Write a program to Write function for perfect 
// a. 


#include<stdio.h>

perfect_number (int a){// check perfect_number function

    int sum =0;


    for(int i=1; i<=a/2;i++){

        if(a%i==0){
            sum +=i;
        }
    }
if (sum == a){
    printf("The %d is the perfect a",a);
}
else{
    printf("%d is not a perfect a",a);
}
    if(sum==a){
        printf("%d is the perfect a ",a);
    }
    else{
        printf("%d is not perfect a ",a);
    }
    return;
}


int main (){

    int number ;
    
    printf("Enter the a : ");
    scanf("%d",&number);

perfect_number(number);

    return 0;
}