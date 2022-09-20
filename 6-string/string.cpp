#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	char now;
	cin >> a;
	for (auto now : a) {
		b.push_back(now);
	}
	cout << b << endl;
	return 0;
}