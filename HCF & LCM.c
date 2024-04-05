#include <stdio.h>

int main(){
    int n, n1, n2, l, h;

    printf("num1: ");
    scanf("%d", &n1);

    printf("num2: ");
    scanf("%d", &n2);

    if(n1 > n2){
        n = n2;
    } else{
        n = n1;
    }   // hcf of 2 num(s) will  be lesser than the smaller no

    for(int i = 1; i <= n; i++){
        if((n1 % i == 0) && (n2 % i == 0)){
            h = i;
        }
    }

    l = (n1 * n2) / h;    // lcm(num1, num2) * hcf(num1, num2) = num1 * num2

    printf("HCF = %d\nLCM = %d", h, l);
    return 0;
}
