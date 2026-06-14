// Q51 Write a program to Find largest and smallest 
// element

#include<stdio.h>
int main(){

    int arr[50],number,max,min;


printf("enter numbers of the array : ");
scanf("%d",&number);

printf("enter the array : ");
for(int i=0;i<=number-1;i++){
    scanf("%d",&arr[i]);

}
max=arr[0];
min = arr[0];
for(int i=1;i<=number-1;i++ ){
    if(max<=arr[i]){
        max=arr[i];
    }
    if(min>=arr[i]){
        min=arr[i];
    }

}
printf("\nlargest number of array : %d",max);
printf("\nsmallest number of array : %d",min);

    return 0;
}