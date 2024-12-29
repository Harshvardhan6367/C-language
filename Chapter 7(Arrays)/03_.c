#include <stdio.h>

int main(){
    int marks[5];
    printf("Enter marks :");

    for(int i =0; i<5; i++){
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Marks of student %d is %d\n", i,marks[i]);
    }
    
    
    return 0;
}