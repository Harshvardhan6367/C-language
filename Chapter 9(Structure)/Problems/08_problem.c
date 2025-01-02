//Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>
#include <string.h>
struct bankAcc{
    int accno;
    float money;
    char name[100];
};
int main(){
    struct bankAcc a1, a2;
    a1.accno = 7687;
    a1.money = 500.23;
    strcpy(a1.name, "Harish");


    printf("%d  %.2f  %s",a1.accno, a1.money, a1.name);
    return 0;
}