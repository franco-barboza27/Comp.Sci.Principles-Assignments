#include <stdio.h>
#include <string.h>

int main(void){
    char animal[20];
    char place[20];
    char verb[20];
    char sentence[500] = "The";
    printf("Name an animal: ");
    scanf("%s", animal);
    printf("name a place: ")
    fgets(place, sizeof(place), stdin);
    printf("name an animal or thing. \n");
    fgets(animal, sizeof(animal), stdin);
    printf("name a place. \n");
    fgets(place, sizeof(place), stdin);
    printf("name a verb(action). \n");
    fgets(verb, sizeof(verb), stdin);
    printf("The %s walked to the %s and did %s with his friend jared the angry turtle. \n", animal, place, verb);
return 0;
}