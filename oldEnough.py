print("This is a program that tells you if you can do certain things.")
age = int(input("How old are you? "))
if age >= 21:
    print("You are old enough to drink. \n")
elif age >= 18:
    print("You are old enough to vote. \n")
elif age >= 16:
    print("You are old enough to drive. \n")
elif age >= 15:
    print("You are old enough to get your learners permit. \n")
elif age >= 5:
    print("You are old enough to go to school. \n")
elif age < 5:
    print("You are not old enough to go to school. \n")