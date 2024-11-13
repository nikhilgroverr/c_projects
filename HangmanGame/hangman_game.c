#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_ATTEMPTS 7
#define WORD_LENGTH 20

void initializeGame(char word[], char display[], int *attemptsLeft);
void displayProgress(char display[], int attemptsLeft);
int isLetterInWord(char word[], char display[], char guess);

int main() {
    char word[WORD_LENGTH] = "hangman";  // Word to guess
    char display[WORD_LENGTH];
    char guessedLetter;
    int attemptsLeft = MAX_ATTEMPTS;
    int wordGuessed = 0;

    initializeGame(word, display, &attemptsLeft);

    while (attemptsLeft > 0 && !wordGuessed) {
        displayProgress(display, attemptsLeft);
        printf("\nEnter a letter: ");
        scanf(" %c", &guessedLetter);
        guessedLetter = tolower(guessedLetter);

        if (isLetterInWord(word, display, guessedLetter)) {
            printf("\nCorrect guess!\n");
        } else {
            attemptsLeft--;
            printf("\nWrong guess. Attempts remaining: %d\n", attemptsLeft);
        }

        if (strcmp(word, display) == 0) {
            wordGuessed = 1;
        }
    }

    if (wordGuessed) {
        printf("\nCongratulations! You've guessed the word: %s\n", word);
    } else {
        printf("\nYou've run out of attempts. The word was: %s\n", word);
    }

    return 0;
}

void initializeGame(char word[], char display[], int *attemptsLeft) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        display[i] = '_';
    }
    display[length] = '\0';
    *attemptsLeft = MAX_ATTEMPTS;
}

void displayProgress(char display[], int attemptsLeft) {
    printf("\nWord: %s", display);
    printf("\nAttempts left: %d", attemptsLeft);
}

int isLetterInWord(char word[], char display[], char guess) {
    int correctGuess = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            display[i] = guess;
            correctGuess = 1;
        }
    }
    return correctGuess;
}
