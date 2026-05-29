#include<stdio.h>
int main(){

int  number;

printf("Enter the number : ");
scanf("%d",&number);

for (int i=1;i<=10;i++){

    printf("\n%d x %d = %d",number,i,number*i);
}
return 0;
}