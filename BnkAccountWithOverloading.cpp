#include <iostream>
#include <string>
using namespace std;

class BankAccount {
public:
    float balance;

    // Constructor to initialize balance
    BankAccount(float a = 0) {
        balance = a;
    }

    // Overloading '+' operator for Deposit (Sum of balances)
    BankAccount operator+(BankAccount t) {
        BankAccount temp;
        temp.balance = balance + t.balance;
        return temp;
    }

    // Overloading '-' operator for Withdraw (Difference of balances)
    BankAccount operator-(BankAccount t) {
        BankAccount temp;
        temp.balance = balance - t.balance;
        return temp;
    }
};

int main() {
    // Initializing two accounts with balances
    BankAccount b1(4550), b2(4500);

    // Using overloaded '+' operator
    BankAccount b3 = b1 + b2;

    // Using overloaded '-' operator
    BankAccount b4 = b1 - b2;

    cout << "Balance After Deposit: " << b3.balance << endl;
    cout << "Balance After Withdraw: " << b4.balance << endl;

    return 0;
}
