#include <iostream>
using namespace std;

int main() {
    int n, d, result;

    cout << "Enter the numerator: ";
    cin >> n;

    cout << "Enter the denominator: ";
    cin >> d;

    try {
        if (d == 0) {
            throw "Division by zero is not allowed...";
        }
        result = n/d;
        
        cout << "Division: " << result << endl;
        
    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}

