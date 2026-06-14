// Q52 Write a program to Count even and odd 
// elements. 

#include<stdio.h>
int main(){

int arr[50],number,count_even=0,count_odd=0;

printf("enter numbers of the array : ");
scanf("%d",&number);

printf("enter the array : ");
for(int i=0;i<=number-1;i++){
    scanf("%d",&arr[i]);

}

for(int i=0;i<=number-1;i++){
    if(arr[i] % 2==0){
        count_even++;
    }
    else{
        count_odd++;
    }
}

printf("Even_elements :[%d] , Odd_elements:[%d]",count_even,count_odd);

    return 0;
}