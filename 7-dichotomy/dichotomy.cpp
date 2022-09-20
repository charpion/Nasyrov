#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Задумайте число N от 1 до 100, а я угадаю!\n";
	int n;
	cin >> n;
	int N = 100;
	int m = N / 2, i = 0, ans = 0;
	N /= 2;

	while (ans != 3) {
		if (ans == 1) {
			if (m != m + N)
				m = m + N;
			else
				m++;
		}
		else if (ans == 2) {
			if (m != m - N)
				m = m - N;
			else
				m--;
		}
		cout << "N больше " << m << " (1 да, 2 нет, 3 равно)? " << endl;
		cin >> ans;
		N /= 2;
		i++;
	}

	cout << "Вы задумали " << m << "! А я молодец!\nКоличество попыток: " << i << endl;
	return 0;
}