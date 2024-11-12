#include <stdio.h>

int main()
{
    int i = 5;
    i = i + 5;
    printf("The value of i is %d\n", i);

    printf("The value if i is %d\n", i++);
    // i++ prints i then and then increments i (post increment operator)

    printf("The value if i is %d\n", ++i);
    //++i increment i first and then prints i (post increment operator)

    i += 2; // exactly same as i= i + 2
    printf("The value of i is %d\n", i);

    return 0;
}