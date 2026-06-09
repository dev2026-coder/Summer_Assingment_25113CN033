// Q38 Write a program to Print reverse pyramid. 
// ********* 
//  ******* 
//   ***** 
//    *** 
//     *


#include<stdio.h>
int main(){

for(int i =1;i<=5;i++){
    for(int j =1;j<=i;j++){
        printf(" ");}

    for(int j=9;j>=2*i-1;j--){
        printf("*");
    }
    printf("\n");
}

    return 0;
}