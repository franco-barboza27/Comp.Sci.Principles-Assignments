print("This is a budget calculator.")


def mathInputs(type):
    return float(input(f"Monthly {type}"))




income = mathInputs("income ")
rent = mathInputs("rent cost ")
utils = mathInputs("utility costs ")
groceries = mathInputs("grocery cost ")
transport = mathInputs("transportation cost ")

spent = rent + utils + groceries + transport
savings = income * .2
budget = income - spent - savings
print(budget)

def perMathInputs(type,amount):
    per = amount/income *100
    return int(f"Your {type} is {per}% income ")


prent = perMathInputs("rent percentage ")
putils = perMathInputs("utilities percentage ")
pgroceries = perMathInputs("groceries percentage ")
ptransport = perMathInputs("transportation percentage ")

print("In total you spend \n")
pspent = perMathInputs("total spent percentage ")

print("You save 20% \n")

print("Your budget is:  ")
pbudget = perMathInputs("budget percentage ")