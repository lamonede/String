#include <stdio.h>
#include <string.h>

void chckncpy(int i, int cnt, char name[], char cpyarry[]);

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

        if(c != 10){
            break;
        }
    }

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

    printf("Copied  %s", cpyarry);

    /*while(name[cnt] != '\0'){
        if(name[cnt] == c){
            if(cnt == 0){
                strcpy(cnt_c, "st");
            } else if(cnt == 1){
                strcpy(cnt_c, "nd");
            } else if(cnt == 2){
                strcpy(cnt_c, "rd");
            } else if(cnt >= 3){
                strcpy(cnt_c, "th");
            }
            printf("Samething : %c, At %d%s", c, cnt + 1, cnt_c);
            cnt++;
            return 0;
        } else {
            cnt++;
        }
    }*/

    /*for(cnt = 0; name[cnt] != '\n'; cnt++){
        if(name[cnt] == c){
            if(cnt == 0){
                strcpy(cnt_c, "st");
            } else if(cnt == 1){
                strcpy(cnt_c, "nd");
            } else if(cnt == 2){
                strcpy(cnt_c, "rd");
            } else if(cnt >= 3){
                strcpy(cnt_c, "th");
            }
            printf("Samething : %c, At %d%s", c, cnt + 1, cnt_c);
            return 0;
        }
    }*/
    
    //printf("They don't have samething");

}

void chckncpy(int i, int cnt, char name[], char cpyarry[]){
    return 0;
}