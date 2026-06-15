// Q53 Write a program to Linear search.

#include<stdio.h>
int main(){

    int arr[50],number,key,position=-1;

    printf("Enter the numbers in Array: ");
    scanf("%d",&number);

    printf("Enter the element to found : ");
    scanf("%d",&key);

    printf("Enter the array : ");

  for(int i=0;i<=number-1;i++){
    scanf("%d",&arr[i]);
  }

  for(int i=0;i<=number-1;i++){
    if(arr[i]==key){
  position =i;
    }  

  
  }

  if(position!=-1){
    printf("the elemsnt (%d) is found at %d",key,position);

  }
else{
    printf("%d is not found",key);
}
    
    return 0;
}