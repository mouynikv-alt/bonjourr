import random
def guess_the_number(): 
    print("Welcome to the Guess the Number Game!") 
    print("I'm thinking of a number between 1 and 100.")
    number_to_guess = random.randint(1, 100)
guess = None
attempts = 0

while guess != number_to_guess:
    guess = int(input("Take a guess: "))
    attempts += 1
    
    if guess < number_to_guess:
        print("Your guess is too low. Try again.")
    elif guess > number_to_guess:
        print("Your guess is too high. Try again.")
    else:
        print(f"Congratulations! You guessed the number in {attempts} attempts.")
        
print("Thanks for playing!")

import random
def guess_the_number(): print("Welcome to the Guess the Number Game!") print("I'm thinking of a number between 1 and 100.")
number_to_guess = random.randint(1, 100)
guess = None
attempts = 0

while guess != number_to_guess:
    guess = int(input("Take a guess: "))
    attempts += 1
    
    if guess < number_to_guess:
        print("Your guess is too low. Try again.")
    elif guess > number_to_guess:
        print("Your guess is too high. Try again.")
    else:
        print(f"Congratulations! You guessed the number in {attempts} attempts.")
        
print("Thanks for playing!")
if name == "main": 
    guess_the_number()