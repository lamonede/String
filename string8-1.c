#include <stdio.h>

void mystr(char name[], char cnt_c[], char cpyarry[], char c);

int main(){
    char name[100];
    char cnt_c[3];
    char cpyarry[100];
    char c;
    int cnt = 0;
    int i = 0;
    
    printf("Enter your Name : ");
    scanf("%s", name);

    printf("Your name : %s\n\n", name);

    printf("Enter charater : \n");

    while(1){
        c = getchar();
        if(c != '\n'){
            break;
        }
    }

    mystr(name, cnt_c, cpyarry, c);
    
}

void mystr(char name[], char cnt_c[], char cpyarry[], char c){
    int cnt = 0;
    int i = 0;
    while(name[cnt] != '\0'){
        if(name[cnt] == c){
            printf("Samething : %c, At %d%s\n", c, cnt + 1, cnt_c);
            while(name[cnt] != '\0'){
                cpyarry[i] = name[cnt];
                cnt++;
                i++;
            }
        } else {
            cnt++;
        }
    }
}