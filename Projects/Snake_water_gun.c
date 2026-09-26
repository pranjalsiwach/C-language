#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
     srand(time(0));// Generates a random number

    int player,computer= rand()% 3;
   /* 0 --> Snake
    1 --> Water 
    2 --> Gun 
   */
  printf("Choose a number\n0 for Snake\n1 for Water\n2 for Gun:\n");
  scanf("%d",&player);
  printf("No choose by computer is %d\n",computer);
  for(int i=0;i<3;i++){
  if(computer==i&& player==i){
    printf("It is a draw,play again\n");
  }
  }//Conditions either you win or loose
  if(computer==0&& player==1){
    printf("You lost the game play again\n");
  }
  else if (computer== 0 && player==2)
  {
    printf("You have won the game play again \n");

  }
  else if (computer ==1 && player==0)
  {
    printf("You have won the game play again\n");
  }
  else if (computer==1&& player==2)
  {
  printf("You have lost the game play again\n");
  }
  else if (computer==2 && player==0)
  {
    printf("You have lost the game play again\n");
  }
    
    else if (computer==2 && player==1)
  {
    printf("You have won the game play again\n");
  }
  return 0;
}