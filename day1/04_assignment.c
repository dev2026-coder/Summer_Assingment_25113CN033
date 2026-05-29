#include<stdio.h>
int main(){

int number,number2,count =0;
printf("Enter the number : ");
scanf("%d",&number);
number2 = number;
if (number ==0 ){
    count++;
 printf("the digits in the %d is %d",number2,count);
}

else{

  while (number>0){
  count++;
  number = number / 10 ;  

}
printf("the digits in the %d is %d",number2,count);

}



return 0;
}
