#include <stdio.h>

// Function prototypes
void withdrawMoney(int *balance);
void checkBalance(int balance);

int main() {
    int balance = 50000;  // Initial balance in account
    int pin = 1234;       // Preset PIN
    int enteredPin;
    int choice;
    char cardInserted;

    printf("Welcome To The ATM\n\n");
    printf("Please Insert Your Card (Enter 'y' to simulate card insertion): ");
    scanf(" %c", &cardInserted);

    if (cardInserted == 'y' || cardInserted == 'Y') {
        printf("\nHello! Please enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            do {
                printf("\n> Press 1 to Withdraw Money\n");
                printf("> Press 2 to Check Balance\n");
                printf("> Press 3 to Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        withdrawMoney(&balance);
                        break;
                    case 2:
                        checkBalance(balance);
                        break;
                    case 3:
                        printf("Thank you for using the ATM. Please take your card.\n");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            } while (choice != 3);
        } else {
            printf("Incorrect PIN. Transaction terminated.\n");
        }
    } else {
        printf("No card inserted. Please try again.\n");
    }

    return 0;
}

// Function to handle the withdrawal process
void withdrawMoney(int *balance) {
    int amount;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    if (amount > *balance) {
        printf("Insufficient balance. Transaction cancelled.\n");
    } else if (amount % 100 != 0) {
        printf("Please enter an amount in multiples of 100.\n");
    } else {
        *balance -= amount;
        printf("Please collect your cash.\n");
        printf("Remaining balance: %d\n", *balance);
    }
}

// Function to check the balance
void checkBalance(int balance) {
    printf("Your current balance is: %d\n", balance);
}
