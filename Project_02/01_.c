#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));
    int player, computer = rand() % 3;

    /*
            0-->snake
            1-->water
            2-->gun
    */

    printf("Chose 0 for snake, 1 for water, 2 for gun :\n");
    scanf("%d", &player);
    printf("Computer choose : %d\n", computer);
    
    if(player == 0 && computer == 0){
        printf("It's a draw! \n");
        
    }
    else if(player == 0 && computer == 1){
        printf("You win! \n");
        
    }
    else if(player == 0 && computer == 2){
        printf("You lose! \n");
        
    }
    else if(player == 1 && computer == 0){
        printf("You lose! \n");
        
    }
    else if(player == 1 && computer == 1){
        printf("It's a draw! \n");
        
    }
    else if(player == 1 && computer == 2){
        printf("You win! \n");
        
    }
    else if(player == 2 && computer == 0){
        printf("You won! \n");
        
    }
    else if(player == 2 && computer == 2){
        printf("You lose! \n");
        
    }
    else if(player == 2 && computer == 2){
        printf("It's a draw! \n");
        
    }
    else{
        printf("Something went wrong \n");
        
    }

    return 0;
}