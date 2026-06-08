// Q35 Write a program to Print repeated character 
// pattern. 
// A 
// BB 
// CCC 
// DDDD 
// EEEEE 

#include<stdio.h>
int main(){

int ch = 65;

for(int i =1 ; i<=5;i++){
    for(int j=1;j<=i;j++){
        printf("%c",ch);
    }
printf("\n");
ch++;
}

    return 0;
}