// Q16 Write a program to Print Armstrong numbers in a range. 

#include<stdio.h>

int main(){

    int number,number_range ,count=0,rem = 0,result =1 ,armstrong_number=0;

    printf("Enter the number range : ");
    scanf("%d",&number_range);

    for (int i=1 ; i<=number_range;i++){// loop for iterate in range
       number = i; 

    while(i>0){//loop for counting digits in number

        i=i/10;
        count++;
    }

    i = number;//restoring the value of i 

    for(int j=1;j<=count;j++){// loop for checking arnstrong_number
        rem = i%10;
     for(int k=1;k<=count;k++){// loop for power operation
        result *=rem;
     }
     armstrong_number += result;
     i  = i/10;
     result=1;

    }

    if (armstrong_number==number){//to print armstrong_number
        printf("%d,",number);
    }
    // restroring other variables for next number verification for armstrong 
    armstrong_number = 0;
     i = number;
     count =0 ;


}

return 0;
}

