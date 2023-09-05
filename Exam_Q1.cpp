#include<iostream>
using namespace std;

factorial(int n)
{
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

printFactorialSeries(int n) {
    for (int i = 0; i <= n; i++) {
        cout << "Factorial of " << i << endl;
		cout << "Factorial is : " << factorial(i) << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    printFactorialSeries(n);
    
    return 0;
}







