// Q45 Write a program to Write function for 
// palindrome. 


#include<stdio.h>

void pallindrome(int a){// check pallindrome function
int rem , rev =0 ,b=a;

while(a>0){
    rem = a%10;   
    rev = (rev+rem)*10;

    a= a/10;
}
    rev=rev/10;


if (rev == b){
    printf("%d is a pllindromme",b);
}
else{
    printf("%d is not a pallindrome",b);
}
return ;
}


int main(){
    int number;
    
    printf("Enter the number : ");
    scanf("%d",&number);

    pallindrome(number);
    
    return 0;
}