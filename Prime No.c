#include <stdio.h>

int main(){
    int n;

    printf("Num: ");
    scanf("%d", &n);

    if(n < 0){
        printf("No.should be +IVE");
    } else if(n == 0 || n ==1){
        printf("Neither PRIME nor COMPOSITE");
    } else if(n == 2){
        printf("PRIME NO.");
    } else if(n > 2){
        int x = 1;
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                x = 0;
                printf("COMPOSITE NO.");
                break;
            }
        }
        if(x == 1){
            printf("PRIME NO.");
        }
    }
    return 0;
}