#ask for a number, word1 and word2
i = 1
num = int(input("Give me a number. \n"))
fword = (input("Give me a word.\n"))
sword = (input("Please give me another word. \n"))
#replace numbers divisible by 5 and 3 with input1 + input2
while i <= num:
    if i%3==0 and i%5==0:
        print(fword + sword)
    
#replace numbers divisible by 3 with input1
    elif i%3==0:
        print(fword)
#replace numbers divisible by 5 with input2
    elif i%5==0:
        print(sword)
#count to input
    else:
        print(i)
    i+=1