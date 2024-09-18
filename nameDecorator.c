#include <stdio.h>

int main(void){
    char name[40];
    printf("What is your name? \n");
    fgets(name, sizeof(name), stdin);
    char editName = ("###", name, "###");
    printf("Hello %s",editName);
return 0;
}