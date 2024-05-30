/*what you want to create*/
#include<stdio.h>

int main(){
    int P1 , P2;
    int R , P , S;
    R > P;
    P > S;
    S > R;
    printf("Rock Paper Scissor game starts now\n");
    printf("Player 1 : ");
   scanf("%d",&P1);
    printf("Player 2 : ");
    scanf("%d",&P2);
    if (P1 > P2)
    {
        printf("Player 1 wins");
    }
    else if (P2 > P1)
    {
        printf("Player 2 wins");
    }
    else
    {
        printf("Draw");
    }
    
     //can design the game Rock Paper Scissor application just using basic C knowledge like if-else statements, random value generation, and input-output of values. 
   //Created application has a feature where we can play the game, and maintain the score of Person 1 and Person 2.
    
    return 0;
}
