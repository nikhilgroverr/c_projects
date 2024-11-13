This is a simple implementation of the Hangman game in C. In this game, the player attempts to guess a secret word by guessing one letter at a time. If a guessed letter is correct, it is revealed in the word. If the guess is incorrect, the number of remaining attempts decreases. The game ends when the player guesses the word correctly or runs out of attempts.



Features:
The game allows the player to guess a word by entering one letter at a time.
The number of attempts is limited (7 wrong guesses).
The word is displayed as underscores (_) and gets progressively filled with correct guesses.
The game tracks and displays the remaining attempts.
The user is prompted for input until they either guess the word or run out of attempts.


Compilation & Running:
To compile and run this program, follow these steps:

Open a terminal (or command prompt) and navigate to the folder where the .c file is located.
Compile the program using a C compiler like GCC:
bash
Copy code


- gcc hangman.c -o hangman
-./hangman



Code Explanation:

Key Functions:

initializeGame(char word[], char display[], int *attemptsLeft): Initializes the game by setting up the display array with underscores and resetting the number of attempts.
displayProgress(char display[], int attemptsLeft): Displays the current progress of the word (with correct letters guessed) and the number of attempts remaining.
isLetterInWord(char word[], char display[], char guess): Checks if the guessed letter is in the word and updates the display array accordingly.


Main Logic:

The word to guess is hardcoded (currently "hangman").
The player is asked to input a letter.
The program checks if the letter is part of the word and updates the display.
The game continues until the player runs out of attempts or guesses the word correctly.

License:
This project is open-source. Feel free to modify and share it!


