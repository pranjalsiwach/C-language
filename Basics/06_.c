#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i,temp;
    for(int i=0;i<2;i++){
        
        temp=a[i];
        a[i]=a[5-i-1];
        a[5-1-i]=temp;
        
    }
    printf("Reversed array ");
    for(int i=0;i<5;i++){
    printf("%d",a[i]);
    }

}