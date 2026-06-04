 // Q23 Write a program to Count set bits in a number. 

 #include<stdio.h>
 int main(){


    int number,count=0;
    printf("Enter the number : ");
    scanf("%d",&number);

    while(number>0){// loop to count set bits in a number

        count++;
        number = number/2;

    }
printf("%d is the sets bits in the number ",count);
return 0;

 }