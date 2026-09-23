#include<stdio.h>
#include<math.h>
int main(){
    int cube;
    
    printf("Enter number:");
    scanf("%d",&cube);
    for(int i=1;i<=cube;i++){
        printf("Number is : %d Cube of number is %d\n",i,i*i*i);
    }

    return 0;

}