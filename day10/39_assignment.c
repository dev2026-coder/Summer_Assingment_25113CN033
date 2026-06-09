// Q39 Write a program to Print number pyramid. 
//     1 
//    121 
//   12321 
//  1234321 
// 123454321

#include<stdio.h>
int main (){
for(int i =1;i<=5;i++){
    for(int j=5;j>=i;j--){//loop for space
        printf(" ");
    }
    for(int j=1;j<=i;j++){// loop for printing increasing counting
        printf("%d",j);
    }
    for(int j=i-1;j>=1;j--){//loop for printing decreasing order counting 
        printf("%d",j);
    }
    printf("\n");
}


    return 0;
}