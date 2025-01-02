//. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.

// #include <stdio.h>
// void printtable(int arr[], int n);
// int main(){
//     int Table[3][10];
//     printtable(Table, 2);
//     return 0;
// }
// void printtable(int arr[], int n){ 
//     int table[10];                                    ā //----->Not work properly.....
//     for (int i = 0; i < 10; i++)
//     {
//         int table[āi] = (n)* ((i+1));
//         printf("%d X %d = %d \n", n, i, Table[i]);
        
//     }
    
// }


// By harry 

#include <stdio.h>

int main(){
    int table[3][10];
    int mul[] = {2, 7, 9};
    
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
