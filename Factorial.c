#include <stdio.h>

int main() {
    int n, l = 1;
    printf("Num: ");
    scanf("%d", &n);

    if(n == 0){
        printf("Factorial of %d is 1", n);
    } else if(n < 0){
        printf("Factorial does not exist");
    } else if(n > 0){
        for(int i = 0; i < n; i++){
            l *= (n - i);
        }
        printf("Factorial of %d is %d", n, l);
    }
    return 0;
}