#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b;
	char s;
	int k;
	cout << "Введите слово: ";
	cin >> a;

	for (int i = 1; i <= a.size(); i++) { // Заполнение слова дефисами
		b.push_back('-');
	}

	cout << b << endl;

	while (a != b) {
		cout << "Введите букву: ";
		cin >> s;
		k = 0;
		for (int i = 0; i <= a.size() - 1; i++) {
			if (a[i] == s) {
				b[i] = s;
				k++;
			}
		}
		if (k == 0) {
			cout << "Нет такой буквы :(" << endl;
		}
		else if (k != 0 && a != b) {
			cout << "Вы угадали :)" << endl;
		}
		if (a != b)
			cout << b << endl;
	}

	cout << "Вы угадали слово - " << b << "! Поздравляю!" << endl;

	return 0;
}