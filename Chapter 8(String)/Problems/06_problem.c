//Write a program to encrypt a string by adding 1 to the ascii value of its characters.
#include <stdio.h>
#include <string.h>

int main(){
    char broCode[] = "Bro code is AAJ GADI TERA BHAI CHALAYGA";
    for (int i = 0; i < strlen(broCode); i++)
    {
          broCode[i] = broCode[i] + 1;
    }
    printf("%s", broCode);
    
    return 0;
}