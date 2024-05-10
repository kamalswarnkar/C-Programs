#include <stdio.h>
#include <string.h>

void checkchar(char arr[], char x){
    int len = strlen(arr);
    int k = 0;
    for(int i = 0; i < len; i++){
        if(x == arr[i]){
            k = 1;
            break;
        }
    }
    if(k == 1){
        printf("Yup\n");
    }else{
        printf("Nope");
    }
}
int main() {
    char str[100];
    char x;
    
    printf("String: ");
    fgets(str, 100, stdin);
    printf("\nchar: ");
    scanf("%c", &x);
    
    
    printf("\nIs \"%c\" a part of \"%s\"?", x, str);
    checkchar(str, x);
    return 0;
}
