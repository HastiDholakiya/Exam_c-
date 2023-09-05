#include <iostream>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    string accountName;
    string accountType;
    string accountBranch;
    double accountBalance;
    

    BankAccount(int number, const string& name, const string& type, const string& branch, double balance)
        : accountNumber(number), accountName(name), accountType(type), accountBranch(branch), accountBalance(balance) {}

    displayAccount() {
        std::cout << "Account Number: " << accountNumber << endl;
        cout << "Account Name: " << accountName << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Account Branch: " << accountBranch << endl;
        cout << "Account Balance: " << accountBalance << endl;
        cout << "-------------------------------------" << endl;
    }
};

const int MAX_ACCOUNTS = 100;
    

int main() {
    BankAccount; 
    int numAccounts = 0; 

    accounts[numAccounts++] = BankAccount(1001, "Hasti Dholakiya", "Savings", "Main Branch", 5000.0);
    accounts[numAccounts++] = BankAccount(1002, "Hetvi Nabhoya", "Checking", "Downtown Branch", 3000.0);

    int searchNumber;
    cout << "Enter Account Number to search: ";
    cin >> searchNumber;

    bool found = false;
    for (int i = 0; i < numAccounts; i++) {
        if (accounts[i].accountNumber == searchNumber) {
            accounts[i].displayAccount();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Account not found." << endl;
    }

    return 0;
}

