#include <stdio.h>

int length(int num) {
    int l = 0;

    for (int i = num; i > 0; i /= 10) {
        l++;
    }

    return l;
}

int power(int base,int exponent) {
    int k = 1;
    while(exponent > 0) {
        k *= base;
        exponent--;
    }

    return k;
}

int main() {
    int n, l, s = 0;

    printf("Num: ");
    scanf("%d", &n);

    l = length(n);

    for (int i = n; i > 0; i /= 10){
        int d = i % 10;
        int k = power(d, l);
        s += k;
    }

    if (n == s) {
        printf("YES!! Armstrong No.");
    } else {
        printf("NO!! Not Armstrong No.");
    }

    return 0;
}
