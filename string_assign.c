#include <stdio.h>

void strleng_chk(char dst[], char src[]);

int main(){
    int strleng = 0;
    char dst[40];
    char src[20];

    scanf("%s", dst);
    scanf("%s", src);

    strleng_chk(dst, src);
    printf("%s", dst);

}

void strleng_chk(char dst[], char src[]){
    int i = 0;
    int j = 0;
    while(dst[i] != '\0'){
        i++;
    }
    while(src[j] != '\0'){
        dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
}