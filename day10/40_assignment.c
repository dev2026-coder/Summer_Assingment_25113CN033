// Q40 Write a program to Print character pyramid. 
//     A 
//    ABA 
//   ABCBA 
//  ABCDCBA 
// ABCDEDCBA 

#include<stdio.h>
int main(){

    for(int i =1 ; i<=5;i++){
        for(int j=5;j>=i;j--){// loop for  printing space 
            printf(" ");
        }
        for(int j=65;j<=i+64;j++){// loop for printing letters in capital letters in increasing order 
            printf("%c",j);
        }
        for(int j=63+i;j>=65;j--){// loop for printing letters in capital letters in decreasing order
            printf("%c",j);
        }
        printf("\n");
    }

    return 0;
}