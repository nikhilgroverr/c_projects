# Calculator Program in C

## Overview

This is a simple command-line calculator program written in C. It allows users to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The program is designed to take user input for the operation and numbers, perform the calculation, and display the result. It also includes basic error handling, such as division by zero and invalid operator inputs.

## Features

- **Basic Operations**: Addition, Subtraction, Multiplication, and Division.
- **Error Handling**: Handles division by zero and invalid operator input.
- **Reusability**: Allows the user to perform multiple calculations in one session.
- **Clear Output**: Structured formatting for easy reading of results and error messages.

## Requirements

- A C compiler such as GCC (GNU Compiler Collection).
- Basic understanding of C programming concepts.


How it Works:

The program starts by displaying a welcome header and a list of available operations. It prompts the user to choose an operation (addition, subtraction, multiplication, or division), then asks for two numbers as input. It then performs the selected operation and displays the result. The user can choose to perform another calculation or exit the program.

Functions:

printHeader(): Displays the welcome message and program header.
printMenu(): Displays the available operations to the user.
printResult(): Displays the result of a calculation in a formatted manner.
printError(): Displays error messages for invalid input (e.g., invalid operator or division by zero).


License
This project is licensed under the MIT License - see the LICENSE file for details.

