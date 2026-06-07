// Q31 Write a program to Print character triangle. 
// A 
// AB 
// ABC 
// ABCD 
// ABCDE 

#include<stdio.h>
int main(){

     ;
for(int i =1 ; i<=5;i++){
    int ch = 65 ;// ascii code 
    for(int j=1;j<=i;j++){
        printf("%c",ch);
        ch++;
    }
   
    
    printf("\n");
}

    return 0;
}