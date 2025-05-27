import random
print(''' WELCOMEE TO ROCK PAPER SCISSORS AGAINST COMPUTER
      ''')

print('''
      Options:
      1.Rock
      2.Paper
      3.Scissors
      
      ''')

ch=int(input("Enter your choice :"))
computer=random.randrange(1,4)

if ch==computer:
    print("Its a draw ----------------")
else:
    if ch==1:
        if computer==2:
            print("Computer wins---------------")
        elif computer==3:
            print("You wins-----------------")
    elif ch==2:
        if computer==1:
            print("You wins---------------")
        elif computer==3:
            print("Computer wins-----------------")
    elif ch==3:
        if computer==1:
            print("Computer wins---------------")
        elif computer==2:
            print("You wins-----------------")

print("GAME OVER----------------")
    