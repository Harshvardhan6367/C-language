#include <stdio.h>

int main()
{
    for (int i = 0; i < 20; i++)
    {
        if (i == 5)
        {
                    // break; // exit the loop now!!
            continue;    // skip this perticular iteration now!!
        }

        printf("%d\n", i);
    }
    printf("For loop is done!!");

    return 0;
}