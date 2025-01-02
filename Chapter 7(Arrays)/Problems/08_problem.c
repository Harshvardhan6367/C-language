//. Repeat problem 7 for a custom input given by the user.

#include <stdio.h>

int main(){
    int table[3][10];
    int mul[3] ;
    scanf("%d  %d  %d", &mul[0], &mul[1], &mul[2]);
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            table[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d X %d = %d \n", mul[i], j+1, table[i][j]);
            
        }
        printf(" \n");
        
    }
    return 0;
}
