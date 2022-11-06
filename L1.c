//DFA to check valid string
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 100

void checkDFA(char s[max]);

int main() {
    char s[max];
    printf("Enter the string: ");
    scanf("%s", s);
    
    checkDFA(s);

    return 0;
}

void checkDFA(char s[max]) {
    short int state = 0, i;
    int len = strlen(s);
    printf("%d", len);
    for(i=0; i<5; i++) {
        if(state == 0) {
            if(isalpha(s[i]) != 0) {
                state = 1;
            }
            else {
                break;
            }
        }
        
        else if (state == 1) {
                    
            if(isalnum(s[i]) != 0) {
                state =  1;
            }
            
            else {
                break;
            }
        }
    }
    
    if(state == 1) {
        printf("String is valid");
    } 
    else {
        printf("String is invalid");
    }
}
