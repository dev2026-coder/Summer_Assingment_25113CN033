// Q46 Write a program to Write function for 
// Armstrong. 


#include<stdio.h>

void armstrong(int a){//check armstrong function

    int b=a,count =0,power,rem,armstrong_number=0;

    while (a>0){
        count ++;
        a=a/10;
    }
  a =b;
         
   

    while(a>0){
       
        rem = a%10;
        power =1 ;
    for(int i =1 ;i<=count;i++){
     power *= rem  ;
    }
    
     armstrong_number =armstrong_number + power;
     a=a/10;
    }

    if(armstrong_number==b){
        printf("%d is a armstrong_number ",b);
    }
    else{
        printf("%d is not a armstrong_number",b);
    }

    return;
}


int main(){

int number;
printf("Enter a number : ");
scanf("%d",&number);

armstrong(number);

    return 0;
}