#include <stdio.h>

int main(){
    int c;

    while(1){
        c = getchar(); //Need to ignore LF(Line Feed)
        printf("%d", c);

        if(c == EOF){
            break;
        }

        printf("Input : %c\n", c);

        if((c <= 'Z') && (c >= 'A')){ //toupper
            c = c + ('a' - 'A');
        } else if((c <= 'z') && (c >= 'a')){ //tolower
            c = c - ('a' - 'A');
        }
        printf("Output : %c\n", c);
    }
}