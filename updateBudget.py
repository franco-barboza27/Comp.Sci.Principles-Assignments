print("This is a budget calculator.")


def mathInputs(type):
    return float(input(f"Monthly {type}"))




income = mathInputs("income")
rent = mathInputs("rent cost ")
utils = mathInputs("utility costs ")
groceries = mathInputs("grocery cost ")
transport = mathInputs("transportation cost ")

spent = rent + utils + groceries + transport
savings = income * .2
budget = income - spent - savings
print(budget)

print("In percents that is. \n")
prent = int(rent /income *100)
putils = int(utils /income *100)
pgroceries = int(groceries /income *100)
ptransport = int(transport /income *100)

def perMathInputs(type,amount):
    int per = amount/income *100
    return (f"Your {type} is {per}% income")

print(prent, "% \n")
print(putils, "% \n")
print(pgroceries, "% \n")
print(ptransport, "% \n")

print("In total you spend \n")
pspent = int(spent /income *100)
print(pspent, "% \n")

print("You save 20% \n")

print("Your budget is:  ")
pbudget = int(budget /income *100)
print(pbudget, "% \n")