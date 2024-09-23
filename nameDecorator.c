#include <stdio.h>
#include <string.h>

int main(void){
    char name[40];
    char hashtag[40] = "###";
    strcat(name , "###");
    strcat(hashtag , name);
    printf("hello %s \n", hashtag);
return 0;
}