#include <stdio.h>

int main(){
    int age = 5;

    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater then 10\n");
    }

        else{
            printf("Your age is not greater then 10");
        }
    return 0;
}







#include <stdio.h>

int main(){
     if (1){
        printf("This if is executed!\n");
     }
     if (2346){
        printf("this if is also executed!\n");
     }
      if ('c'){
        printf("this character inside if is also executed!\n");
     }
      if (0){
        printf("I am zero - I am not executed!\n");
     }
    return 0;
}








#include <stdio.h>

int main(){
    int age = 43;
    if (age>18){
        printf("You can drive\n");
    }
    else{
        printf("you can't drive\n");
    }
    return 0;
}







#include <stdio.h>

int main(){
    int a = 345; int b = 347;
    a>b? printf("a is greater"):printf("b is greater");
    return 0;
}









#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("You entered 1\n");
        break;

    case 2:
        printf("You entered 2\n");
        break;

    case 3:
        printf("You entered 3\n");
        break;
    case 4:
        printf("You entered 4\n");
        break;
        default:
              printf("Nothing match");
    }
    return 0;
}
















