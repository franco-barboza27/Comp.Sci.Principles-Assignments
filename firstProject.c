#include <stdio.h>

int main(void){
    char name[35];
    printf("what is your name? \n");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s",name);
    return 0;
}
//if (name) == str("Franco"):printf("Hello Creator") DOESN'T WORK