// Write a function slice() to slice a string. It should change the original string such that 
// it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position for slice.

#include <stdio.h>
void slice(char name[], int a, int b);
int main(){
    char name[] = "Harsh Vardhan" ;

    slice(name, 3, 7);
    
    return 0;
}
void slice(char name[], int a, int b){
    for (int i = a; i < b; i++)
    {
        printf("%c", name[i]);
        
    }
    
}


 
//  >Harry bhai's code...

// #include <stdio.h>


// char* slice(char str[], int m, int n){
//     int i=0, count;  
//     char *ptr1 = &str[m];
//     char *ptr2 = &str[n];

//     str = ptr1;
//     str[n] = '\0';
//     return str;

// }
// int main(){
//     char str[] = "Harry bhai";
    
//     printf("%s", slice(str, 1, 7));
//     return 0;
// }
