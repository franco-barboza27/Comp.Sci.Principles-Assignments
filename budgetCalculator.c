#include <stdio.h>

int main(void){
    float income, rent, utils, groceries, transport, savings, expenses, spend;
    float prent, putils, pgroceries, ptransport, psavings, pexpenses;
  
    printf("This is a budget calculator.\n What is your income per month?\n");
    scanf("%f", &income);
    printf("how much does your rent cost?\n");
    scanf("%f", &rent);
    printf("how much do your utilities cost?\n");
    scanf("%f", &utils);
    printf("how much do your groceries cost?\n");
    scanf("%f", &groceries);
    printf("how much do your transportation cost?\n");
    scanf("%f", &transport);
   
    savings = income * .2;
    expenses = rent + utils + groceries + transport;
    spend = income - expenses - savings;
    printf("you make $%.2f\n", income);
    printf("your expenses are $%.f\n", expenses);
    printf("your spending money is $%.2f\n", spend);
    printf("%.2f\n", income);
    
    prent = rent/income *100;
    putils = utils/income *100;
    pgroceries = groceries/income *100;
    ptransport = transport/income *100;
    psavings = savings/income *100;
    pexpenses = expenses/income *100;
    
    printf("your rent is %d%% of your income\n", (int)prent);
    printf("your utilities are %d%% of your income\n", (int)putils);
    printf("your groceries are %d%% of your income\n", (int)pgroceries);
    printf("your transportation costs are %d%% of your income\n", (int)ptransport);
    printf("your savings are %d%% of your income\n", (int)psavings);
    printf("your expenses are %d%% of your total income", (int)pexpenses);
    return 0;
}