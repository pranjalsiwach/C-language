#include<stdio.h>
int main(){
    int number,divisors=0;
    printf("Enter numer :\n");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
    if(number%i==0){
    divisors++;
    }
    }
    printf("No of divisors are %d",divisors);
}