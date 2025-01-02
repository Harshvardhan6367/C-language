//Write a program to check whether a given character is present in a string or not.

#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "Harshvardhan";
    char c = 'x';
    int contain = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        if(name[i] == c){
            contain = 1;
            break;   // This break statement will exit the loop once the character is found!
        }
    }
    if (contain)
    {
        printf("The character exist in word\n");
        
    }else{
        printf("The character does not exist in word\n");
        
    }
    
    
    
    return 0;
}