#include<stdio.h>
int main(void){
    int rollno,M1,M2,M3,percentage;
    printf("Roll no of student is :\n");
    scanf("%d",&rollno);
    printf("Marks in three subjects is \n");
    scanf("%d %d %d",&M1,&M2,&M3);
    percentage=(M1+M2+M3)/3;
    printf("Precentage of the student is %d\n",percentage );
    if(percentage>=60){
        printf("You got first divison\n");
    }
    else{
        printf("You haven't got first division\n");
    }

}