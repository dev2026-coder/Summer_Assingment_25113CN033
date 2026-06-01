// Q10 Write a program to Print prime numbers range. 

#include<stdio.h>
int main (){

    int number, count=0 ;

    printf("enter the number to set the range : ");
    scanf("%d",&number);
for (int i=2;i<=number;i++){// to test number in range

    for (int j=2;j<=i/2;j++){// loop for checking number is prime or not 

        if(i%j==0){
            count++;
            break;
        }
       
    }
     if (count==1 ){
        count--;
    }
   else{
    printf("%d is the  prime number\n",i);
   }
}
    
return 0;
}