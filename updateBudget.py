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
    return (f"Your {type} is {per}% income ")


print(perMathInputs("rent percentage", rent))
print(perMathInputs("utilities percentage", utils))
print(perMathInputs("groceries percentage", groceries))
print(perMathInputs("transportation percentage", transport))

print(perMathInputs("total spent percentage", spent))
print("You save 20% \n")
print(perMathInputs("budget percentage", budget))