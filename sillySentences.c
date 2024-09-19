#include <stdio.h>
#include <string.h>

int main(void){
    char animal[20];
    char place[20];
    char verb[20];
    char sentence[500] = "The ";
    printf("Name an animal or thing: ");
    scanf("%s", animal);
    printf("name a place: ");
    scanf("%s", place);
    printf("name a past tense verb(action). \n");
    scanf("%s", verb);
    strcat(sentence, animal);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " and ");
    strcat(sentence, verb);
    strcat(sentence, " with his friend, the angry turtle. ");
    printf("%s", sentence);
return 0;
}