//Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15).

#include <stdio.h>
#include <stdlib.h>

int main(){
     int n = 7;
     int *ptr;
     ptr = (int*) malloc(10 * sizeof(int));
     
     for (int i = 0; i < 10; i++)
     {
        ptr[i] = n * (i+1);
        printf("%d X %d = %d\n", n, (i+1), ptr[i]);
        
     }
     
     printf(" \n");
     
     ptr = (int*) realloc(ptr, 15*sizeof(int));

     for (int i = 0; i < 15; i++)
     {
        ptr[i] = n * (i+1);
        printf("%d X %d = %d\n", n, (i+1), ptr[i]);
        
     }
     free(ptr);

    return 0;
}