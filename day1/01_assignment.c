#include <stdio.h>
int main(){


int number ,sum=0 ;

printf("enter the a natural number: ");
scanf("%d",&number);

for (int i=1;i <= number;i++){
sum += i;

}

printf("\nthe sum of all natural numbers upto %d is %d",number,sum);

return 0;
}