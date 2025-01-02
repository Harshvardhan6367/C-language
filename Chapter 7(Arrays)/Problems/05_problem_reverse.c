//Write a program containing a function which reverses the array passed to it.

#include <stdio.h>
void reverse(int arr[], int n);
void printFunc(int arr[], int n);

int main(){
    int func[7] = {1, 2, 3, 4, 5, 6, 7};
    

    reverse(func, 7);
    printFunc(func, 7);
    return 0;
}
void printFunc(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]); 
    }
    printf("\n");
    
}

void reverse(int arr[], int n){
    int temp;
    for(int i=0; i< n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;


        
    }
}