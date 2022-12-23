#include <vector>
#include <iostream>
#include <conio.h>
#include <algorithm>

using namespace std;


void print(const vector<int> &set) {
    for (int i = 0; i < set.size() - 1; i++) {
        cout << set[i] << " + ";
    }
    cout << set[set.size() - 1] << endl;
}


int sum(const vector<int> &set) {
    int sum = 0;
    for (int i: set) {
        sum += i;
    }
    return sum;
}


void search(vector<int> set, vector<int> subset, int n, int k, int s, int amount) {
    if (k == n + 1) {
        if (sum(subset) == s && subset.size() == amount) print(subset);
    } else {
        subset.push_back(set[k]);
        search(set, subset, n, k + 1, s, amount);
        subset.pop_back();
        search(set, subset, n, k + 1, s, amount);
    }
}


int main() {
    int s, n, x;
    vector<int> a;


    cout << "Enter S" << endl;
    cin >> s;
    cout << "Enter number of cells" << endl;
    cin >> n;
    int amount = n;
    cout << "Enter banned digits" << endl;
    while ((x = _getche()) != 13) {
        if (x != 32) a.push_back(x - 48);
    }

    
    vector<int> set = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> subset;

    
    for (int &i: a) {
        set.erase(find(set.begin(), set.end(), i));
    }

    
    search(set, subset, int(set.size() - 1), 0, s, amount);
}