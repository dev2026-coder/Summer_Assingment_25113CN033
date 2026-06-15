// Q56 Write a program to Find duplicates in array. 

#include<stdio.h>
int main(){

    int arr[50],number,count=0;

    printf("Enter the numbers in Array: ");
    scanf("%d",&number);

  

    printf("Enter the array : ");

  for(int i=0;i<=number-1;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<=number-2;i++){
    for(int j=i+1;j<=number-1;j++){
    if(arr[i]==arr[j]){
     printf("\n=>%d ",arr[i]);
     count++;
    } 
    }
  }
    if(count!=0){
        printf("\nrepetative elements in array ");

    }
    else{
        printf("\nThere are not the any repetative elements in array");
    }

  
    
    return 0;
}