//Write a program to count the occurrence of a given character in a string.

#include <stdio.h>
#include <string.h>
int countChar(char arr[], char);
int main(){
    char name[] = "Harshvardhan";

    printf("%d", countChar(name, 'a'));
    return 0;
}
int countChar(char arr[], char a){
    int count = 0;
    
    for (int i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == a){
            count++;
        }
    }
    
    return count;
}