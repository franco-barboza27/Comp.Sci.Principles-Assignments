#include <stdio.h>
float income, rent, utils, groceries, transport, savings, expenses, spend;


float input(char type[], float var){
    printf("Monthly %s: \n", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income *100;

    printf("your %s is %d%% of your income. \n", type, per);
}


int main(void){
    printf("This is a budget calculator. \n");
    income = input("income", income);
    rent = input("rent", rent);
    utils = input("utilities", utils);
    groceries = input("groceries", groceries);
    transport = input("transportation", transport);

    savings = income * .2;
    expenses = rent + utils + groceries + transport;
    spend = income - expenses - savings;

    printf("you make $%.2f\n", income);
    printf("your expenses are $%.f\n", expenses);
    printf("your spending money is $%.2f\n", spend);
    printf("%.2f\n", income);
    
    percent("rent", rent);
    percent("utilities", utils);
    percent("groceries", groceries);
    percent("transportation", transport);
    percent("savings", savings);
    percent("expenses", expenses);
    percent("spending money", spend);
    return 0;
}