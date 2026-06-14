// Q49 Write a program to Input and display array. 

#include<stdio.h>
int main(){

char arr[3];

printf("enter a string : ");//for dev
for (int i=0;i<=2;i++){
    scanf("%c",&arr[i]);
}


for(int i =0;i<=2;i++){
printf("%c",arr[i]);
}

    return 0;
}