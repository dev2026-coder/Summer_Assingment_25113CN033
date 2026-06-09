// Q37 Write a program to Print star pyramid. 
//     * 
//    *** 
//   ***** 
//  ******* 
// ********* 

#include<stdio.h>
int main(){

for(int i =1;i<=5;i++){
    for(int j=5;j>=i;j--){//loop for printing space 
        printf(" ");
    }
    for(int j=1;j<=2*i-1;j++){//loop for printing star
        printf("*");
    }

    printf("\n");
}

    return 0;
}