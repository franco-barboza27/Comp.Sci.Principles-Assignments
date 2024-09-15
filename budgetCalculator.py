income = float(input("This is a budget calculator assuming you save 20% per month. \n How much do you make per month? \n"));
rent = float(input("How much rent do you pay per month? \n"));
utils = float(input("How much do utilities cost a month? \n"));
groceries = float(input("how much do groceries cost a month \n"));
transport = float(input("How much money does transportation cost per month? \n"));

spent = rent + utils + groceries + transport;
savings = income * .2;
budget = income - spent - savings;
print(budget);

print("In percents that is. \n");
prent = int(rent /income *100);
putils = int(utils /income *100);
pgroceries = int(groceries /income *100);
ptransport = int(transport /income *100);

print(prent, "% \n");
print(putils, "% \n");
print(pgroceries, "% \n");
print(ptransport, "% \n");

print("In total you spend \n");
pspent = int(spent /income *100);
print(pspent, "% \n");

print("You save 20% \n");

print("Your budget is:  ");
pbudget = int(budget /income *100);
print(pbudget, "% \n");

#no addition symbols used to make the "% \n" because it was "an unsupported operand" as in + "% \n" didn't work.