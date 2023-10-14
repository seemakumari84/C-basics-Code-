#include <stdio.h>
    int isVoWel(char letter){
        letter=tolower(letter);
        if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
            return 1;
        }else{
            return 0;
        }
    }
int main() {
    // Write C code here
    char letter;
    printf("enter a letter");
    scanf("%c",&letter);
    if(isVoWel(letter)){
        printf("%c is a voWel",letter);
    } else{
        printf("%c is a not voWel",letter);
    }
    return 0;}