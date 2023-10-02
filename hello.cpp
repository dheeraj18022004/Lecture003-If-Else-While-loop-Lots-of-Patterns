#include <iostream>

using namespace std;

int main() {
    double balance, withdrawAmount, depositAmount;

    cout << "Enter your initial account balance: ";
    cin >> balance;

    cout << "Enter the amount you want to withdraw: ";
    cin >> withdrawAmount;

    // Check if the withdrawal amount is valid
    if (withdrawAmount > balance) {
        cout << "Insufficient balance. Cannot withdraw." << endl;
    } else {
        balance -= withdrawAmount;
        cout << "Withdrawal successful. New balance: " << balance << endl;
    }

    cout << "Enter the amount you want to deposit: ";
    cin >> depositAmount;

    balance += depositAmount;
    cout << "Deposit successful. New balance: " << balance << endl;

    return 0;
}
