// Q50 Write a program to Find sum and average of 
// array. 

#include<stdio.h>
int main(){

    int arr[5],sum=0;
    float  average;

    printf("enter five numbers : ");

    for(int i=0;i<=4;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=4;i++){
       sum += arr[i];
    }

    average = sum/5.0;

    printf("sum = %d, average = %f",sum,average);

}