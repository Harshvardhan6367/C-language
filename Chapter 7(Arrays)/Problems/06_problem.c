//Write a program containing functions which counts the number of positive integers in an array.

#include <stdio.h>
int countInt(int arr[], int n);
    
int main(){
    int arr[] = {1 ,-2, 3, 4, 5, -6, -7};
    printf("The no of positive integers in array:%d",  countInt(arr, 7));
    return 0;
}

int countInt(int Arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i]> 0)
        {
            count++;
        }
    }
        return count;
}

