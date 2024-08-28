# random-number
This C++ program is a simple number-guessing game where the player has five tries to guess a randomly generated number between 1 and 100. Here's a summary of how the program works:

1. Initialization:
The program includes the necessary headers: iostream for input/output operations, cstdlib for the rand() function, and ctime for seeding the random number generator.
The srand(static_cast<unsigned int>(time(nullptr))) line seeds the random number generator with the current time, ensuring that a different random number is generated each time the program is run.
2. Random Number Generation:
A random number between 1 and 100 is generated using rand()%100+1 and stored in the variable secretnumber.
3. Gameplay:
The player is informed that they have 5 tries to guess the number.
A for loop runs 5 times, allowing the player to make 5 guesses.
For each guess:
The player is prompted to enter a number between 1 and 100.
The program compares the player's guess (a) with the secretnumber:
If the guess is higher than the secret number, it outputs "it is too high."
If the guess is lower, it outputs "it is too low."
If the guess is correct, it outputs "it is an exact number" and breaks out of the loop.
4. End of the Game:
After the loop finishes (either by guessing correctly or exhausting the 5 attempts), the program reveals the secret number.

Summary:
The program allows the user to guess a randomly generated number between 1 and 100. The user has five attempts to guess the number, with feedback provided after each guess indicating whether the guess was too high, too low, or correct. If the correct number is guessed, the game ends early. Finally, the secret number is revealed whether the user guesses correctly or not
