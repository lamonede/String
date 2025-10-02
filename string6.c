#include <stdio.h>

int strlen1(char str[]);

int main(){
    int length = 0;
    char dst[12] = "Hello";
    char src[6] = "World";
    length = strlen1("lemonade");
    printf("%d", length);
    
}

int strlen1(char str[]){
    int i = 0;
    while (str[i] != '\0'){
        i++;
    }
    return i;
}