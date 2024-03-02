#include <stdio.h>

int is_leap(int year){

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("LEAP year");
            }else{
                printf("NOT a LEAP year");
            }
        }else{
            printf("LEAP year");
        }
    }else{
        printf("NOT a LEAP year");
    }
}

int length(int num){
    int l = 0;
    for(int i = num; i > 0; i /= 10){
        l++;
    }
    return l;
}

int main() {
    int n;

    printf("YEAR: ");
    scanf("%d", &n);

    int l = length(n);

    if(l == 4){
        is_leap(n);
    } else{
        printf("Invalid Year.  Format ---> yyyy");
    }
    return 0;
}
