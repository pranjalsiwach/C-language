#include<stdio.h>
int main(){
    int a;
    printf("Enter number of days\n");
    scanf("%d",&a);
int years,weeks,days;
years=a/365;
weeks= (a%365)/7;
days= a-(years*365)-(weeks*7);
printf("No of years are %d\n",years);
printf("No of weeks is %d\n",weeks);
printf("No of days is %d\n",days);

return 0;
}