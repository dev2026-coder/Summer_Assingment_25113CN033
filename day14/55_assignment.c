// Q55 Write a program to Second largest element. 

// Q53 Write a program to Linear search.

#include<stdio.h>
int main(){

    int arr[50],number,second_max,max;

    printf("Enter the numbers in Array: ");
    scanf("%d",&number);


    printf("Enter the array : ");

  for(int i=0;i<=number-1;i++){
    scanf("%d",&arr[i]);
  }

  max=arr[0];
  second_max = arr[0];

  for(int i=0;i<=number-1;i++){
    if(max<=arr[i]){
  max=arr[i];
    }  

  
  }
  
    for(int i=0;i<=number-1;i++){
    if((second_max<=arr[i])&&(arr[i]!=max)){
  second_max=arr[i];
    }  

  
  }

printf("%d is second largest element of the array",second_max);
    
    return 0;
}