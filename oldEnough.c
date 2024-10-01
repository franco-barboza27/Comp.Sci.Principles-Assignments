#include <stdio.h>

int main(void){
    int age;
    printf("How old are you?");
    scanf("%d", &age);
    if (age >= 21){
        printf("You are old enough to drink.");
    }else if (age >= 18){
        printf("You are old enough to vote");
    }else if (age >= 16){
        printf("You are old enough to drive.");
    }else if (age >= 15){
        printf("You are old enough to get a learners permit");
    }else if (age >= 5){
        printf("You are old enough to go to school.");
    }else if (age < 5);{
        printf("You are not old enough to go to school, can you even read this?");
    }
return 0;
}