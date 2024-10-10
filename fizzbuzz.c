#include <stdio.h>
#include <string.h>

int i;
int usr;
char one[50];
char two[50];
char fixer[50];

int main(){
    //add input
    printf("Give me a number :");
    scanf("%d", &usr);
    printf("Give me a short word NOW!!!!!!");
    scanf("%s", one);
    printf("Give me a another short word :)");
    scanf("%s", two);
    strcat(fixer, one);
    strcat(fixer, two);
    //loop that counts to input
    for(i=1;i<=usr;i++){
        //replace #'s divisible by 3 and 5 with input
        if(i%3==0 && i%5==0){
            printf("%s\n", fixer);
        //replace #'s divisible by 3 with input
        }else if(i%3==0){
            printf("%s\n", one);
        //replace #'s divisible by 5 with input
        }else if(i%5==0){
            printf("%s\n", two);
    //print the number
        }else{
            printf("%d \n", i);
        }
    }
}