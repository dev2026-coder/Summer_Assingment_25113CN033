// Q54 Write a program to Frequency of an element.

#include<stdio.h>
int main(){

    int arr[50],number,key,frequency=0;

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
  frequency++;
    }  

  
  }

  if(frequency!=0){
    printf("the element %d has frequency %d ",key,frequency);

  }
else{
    printf("%d is not found",key);
}
    
    return 0;
}