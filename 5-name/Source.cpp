#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string name;
	cin >> name;
	cout << "������, " + name + "!" << endl;
	return 0;
}