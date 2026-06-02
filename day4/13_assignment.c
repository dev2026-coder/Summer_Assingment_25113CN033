// Q13 Write a program to Generate Fibonacci series. 

#include<stdio.h>
int main(){

    int previous_second=0,previous_first=1,current,number_of_terms;

    printf("Enter the number of terms of fibbonacci series : ");
    scanf("%d",&number_of_terms);

    printf("%d,%d",previous_second,previous_first);

    for(int i = 1;(i<=number_of_terms-2);i++){

        current=previous_first+previous_second;
        printf(",%d",current);
        previous_second=previous_first;
        previous_first=current;

    }

    return 0;
}