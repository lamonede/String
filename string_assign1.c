#include <stdio.h>

int strlen(char str[]);

int main(){
    int length = 0;

    char dst[12] = "Hello";
    char src[6] = "World";

    length = strlen("peach");
}

int strlen(char str[]){
    int i = 0;
    
    while (str[i] != NULL){
    printf("%c\n", str[i]);
    i++;
    } return i;
}