#include<stdio.h>
int main(){
    int a,temp,b,sum=0;
   printf("Intergers are \n");
   scanf("%d %d",&a,&b);
   if(a>b){
    temp=a;
    a=b;
    b=temp;

   }
   for(int i=a;i<b; i++){
    if(i%17!=0){
    sum= sum+i;}

   }
   printf("Sum is %d",sum);
}