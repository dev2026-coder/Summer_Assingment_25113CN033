// Q14 Write a program to Find nth Fibonacci term. 

#include<stdio.h>
int main (){

    int nth_term ,previous_first=1,previous_second=0,current;


    printf("enter the nth term of fibonnaci series");
    scanf("%d",&nth_term);
        
    if (nth_term==1){
    printf("%d is the %dth term of fibonacci series",previous_second,nth_term);}
    if (nth_term==2){
    printf("%d is the %dth term of fibonacci series",previous_first,nth_term);}

    
        for (int i = 1; (i<=nth_term-2);i++){

        current = previous_first+previous_second;
        previous_second=previous_first;
        previous_first=current;
        
    }
    if ((nth_term!=1)&&(nth_term!=2)){
    printf("%d  is the %dth term of fibonnaci series",current,nth_term );}
    
    return 0;
}