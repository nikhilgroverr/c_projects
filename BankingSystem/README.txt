# Banking System in C

## Overview

This project is a simple Banking System implemented in C. It allows users to perform basic banking operations like creating customer accounts, depositing money, withdrawing money, and displaying account details and transaction records. The system uses file handling to store account and transaction data, making it persistent even after the program ends.

## Features

- **Customer Details**: Allows creation and storing of customer details, such as account number, name, address, and balance.
- **Deposit and Withdrawal**: Enables deposit and withdrawal operations for customer accounts, storing transaction details.
- **Transaction History**: Displays transaction history for all accounts.
- **File Handling**: Uses file handling for storing and updating customer and transaction data.
  
## Requirements

- A C compiler such as GCC (GNU Compiler Collection).
- Basic knowledge of file handling in C.

## Files Used

- `account`: Stores customer account details.
- `trans1`: Stores transaction records for deposits and withdrawals.


Functions:

cust_detail()
Prompts the user to enter customer details such as account number, name, father’s name, address, and balance, then stores them in the account file.

disp()
Displays the list of all customer accounts stored in the account file, including account number, name, father’s name, address, and balance.

deposit()
Allows the user to deposit money into a customer account. It updates both the account balance and records the transaction in the trans1 file.

withdrawl()
Allows the user to withdraw money from a customer account. It ensures the account has sufficient balance before updating the account and transaction records.

trans_disp()
Displays all transactions (deposits and withdrawals) from the trans1 file, including account number, date, transaction type, and amount.


Main Menu:

The main menu presents a list of operations that the user can choose from:

Customer Details (Create a new account)
Withdraw Money
Deposit Money
Display All Accounts
Display All Transactions
Exit the Program
