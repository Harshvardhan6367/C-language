#include <stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("the value of sum of multiple of 8 is %d", sum);
    return 0;
}






#include <stdio.h>

int main()
{
    /*int i = 1;
    int sum = 0;
    do{
        sum +=i;
        i++;
    }while(i<=10);
        printf("the value of sum of first 10 natural no is %d", sum);*/
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("the value of sum of first 10 natural no is %d", sum);

    return 0;
}






#include <stdio.h>

int main()
{
    int product = 1;
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The factorial of 4 is %d", product);

    return 0;
}






#include <stdio.h>

int main(){
    int n = 6 ;
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
        prime = 1;
        }
    }
     if(prime){
        printf("%d is not prime\n", n);
     }
     else{
          printf("%d is prime\n", n);
     }
    return 0;
}







