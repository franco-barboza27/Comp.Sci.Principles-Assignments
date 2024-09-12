#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char groceries[9];
    char car[9];
    printf("This is a budget calculator.\n What is your income per month?\n");
    scanf("%s", income);
    printf("how much do your utilities cost?\n");
    scanf("%s", income);
    printf("You make %s\n", income);
    float budget[9] = (float) income - (float) utilities - (float) groceries - (float) car;
    printf("%f", budget);
    return 0;
}
