import datetime

currentime = datetime.datetime.now()

print(currentime.hour)

hour = currentime.hour

if(hour < 12):
    print("Good Morning! \n")
elif(hour < 18):
    print("Good Afternoon!")
else:
    print("Good Evening!")