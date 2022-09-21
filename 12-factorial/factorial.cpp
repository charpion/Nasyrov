#include <iostream>
#include <string>

using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int check(string a) {
    for (auto now : a) {
        if (now < '0' || now > '9') {
            throw "It's not a positive integer, enter a positive integer: ";
            break;
        }
    }
    int x = stoi(a);
    if (x > 100000) {
        throw "This number is more than 100000, enter the less number: ";
    }
    return x;
}

int main() {
    string a;
    bool b = true;
    cout << "Enter the number: ";

    while (b) {
        cin >> a;
        try {
            int x = check(a);
            cout << "Factorial of the number = " << fact(x) << endl;
            b = false;
        }
        catch(const char *str) {
            cout << str;
        }
    }
    
    return 0;
}