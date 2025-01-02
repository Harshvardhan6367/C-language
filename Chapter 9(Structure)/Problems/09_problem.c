//Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>
#include <string.h>
struct date{
    int mm;
    int dd;
    int yyyy;
};

int Compare(struct date d1,struct date d2);


int main(){
    struct date d1 = {06, 29, 2006};
    struct date d2 = {06, 28, 2006};
     
    printf("%d \n", Compare(d1,d2));
    
    return 0;
}


int Compare(struct date d1,struct date d2){
    if (d1.yyyy>d2.yyyy)    
    {
       return 1;
        
    }
    else if(d1.yyyy<d2.yyyy){
        return -1;
    }
    else if(d1.mm>d2.mm){
        return 1;
    }
    else if(d1.mm<d2.mm){
        return -1;
    }
    else if(d1.dd>d2.dd){
        return 1;
    }
    else if(d1.dd<d2.dd){
        return -1;
    }else{
        return 0;
    }
    
}