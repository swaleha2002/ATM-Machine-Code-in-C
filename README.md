# ATM Machine Simulation in C

This project is a simple simulation of an ATM machine coded in C, demonstrating basic ATM functionalities such as card insertion, PIN verification, balance inquiry, and money withdrawal. The code is structured for easy understanding and interaction and is a useful example for beginners interested in embedded systems and C programming.

## Features
- Card Insertion Simulation: User can simulate card insertion by entering a character.
- PIN Verification: The ATM checks for a 4-digit PIN and allows access if correct.
- ATM Menu Options:
  - Withdraw money
  - Check balance
  - Exit
- Balance Verification: Ensures sufficient funds are available before withdrawal.
- Realistic Constraints: The withdrawal amount must be in multiples of 100, simulating a typical ATM restriction.

## Requirements
- Basic understanding of C programming
- Any C compiler (e.g., GCC, Visual Studio Code with C extension)
- This is a command-line based application, so it requires a terminal or console to run.

## Code Overview

The code consists of the following key components:
- Main Function: Handles card insertion, PIN verification, and menu selection.
- withdrawMoney() Function**: Checks for sufficient balance, ensures the amount is a multiple of 100, and processes withdrawals.
- checkBalance() Function**: Displays the current balance.

## Usage

1. Run the Program: Compile and execute the code.
2. Insert Card: Simulate card insertion by entering 'y' when prompted.
3. Enter PIN: Enter the correct 4-digit PIN (default is `1234`).
4. Select Options:
   - **Press 1** to withdraw money.
   - **Press 2** to check the account balance.
   - **Press 3** to exit the ATM.

### Example Workflow
```plaintext
Welcome To The ATM

Please Insert Your Card (Enter 'y' to simulate card insertion): y

Hello! Please enter your 4-digit PIN: 1234

> Press 1 to Withdraw Money
> Press 2 to Check Balance
> Press 3 to Exit
Enter your choice: 1

Enter the amount to withdraw: 1000
Please collect your cash.
Remaining balance: 49000
```
![Alt text](image-path-or-URL)

## Important Notes
- The initial balance is set to 50000.
- The PIN is set to 1234 by default.
- Withdrawal is only allowed in multiples of 100.
- For simplicity, this code does not use actual card inputs or secure PIN handling as in real ATM machines.

## License
This code is for educational purposes and is provided under the MIT License.

Feel free to modify and use this project to learn or demonstrate basic ATM functionalities!
