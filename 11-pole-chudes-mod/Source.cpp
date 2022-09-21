#include <iostream>
#include <string>
#include <Windows.h>
#include <set>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b, s;
	int k;
	set <char> letters;
	cout << "Введите слово: ";
	cin >> a;

	for (int i = 1; i <= a.size(); i++) { // Заполнение слова дефисами
		b.push_back('-');
	}

	cout << b << endl;

	while (a != b) {
		cout << "Введите букву или угадайте слово: ";
		cin >> s;

		if (s.size() > 1 && s == a) { // Проверка слова
			cout << "Вы угадали слово - " << s << "! Поздравляю!" << endl;
			return 0;
		}

		else if (s.size() > 1 && s != a) { // Проверка слова
			cout << "К сожалению, вы не угадали слово. Вы проиграли." << endl;
			return 0;
		}

		else { // Проверка буквы
			if (letters.find(s[0]) == letters.end()) { //Проверка на уже названную букву
				letters.insert(s[0]);
				k = 0;
				for (int i = 0; i <= a.size() - 1; i++) {
					if (a[i] == s[0]) {
						b[i] = s[0];
						k++; // Счётчик вхождения буквы в слово на очередном вводе
					}
				}
				if (k == 0) {
					cout << "Нет такой буквы :(" << endl;
				}
				else if (k != 0 && a != b) {
					cout << "Вы угадали :)" << endl;
				}
				if (a != b) // Вывод слова после очередного ввода
					cout << b << endl;
			}
			else {
				cout << "Эта буква уже была, попробуйте еще раз." << endl;
			}
		}
	}

	cout << "Вы угадали слово - " << b << "! Поздравляю!" << endl;

	return 0;
}