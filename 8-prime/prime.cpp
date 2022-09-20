#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n, k = 0;
	cout << "Enter the number" << endl;
	cin >> n;
	for (int i = 2; i <= round(sqrt(n)); i++) {
		if (n % i == 0) {
			k++;
		}
	}
	if (k == 0) {
		cout << n << " is prime" << endl;
	}
	else {
		cout << n << " is not prime" << endl;
	}
	return 0;
}