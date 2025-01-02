// Solve problem 9 for time using ‘typedef’ keyword.

#include <stdio.h>
#include <string.h>
typedef struct date{
    int mm;
    int dd;
    int yyyy;
}dob;

int Compare(dob d1,dob d2);


int main(){
    dob d1 = {06, 29, 2006};
    dob d2 = {06, 30, 2006};
     
    printf("%d \n", Compare(d1,d2));
    
    return 0;
}


int Compare(dob d1,dob d2){
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