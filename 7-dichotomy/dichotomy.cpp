#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "��������� ����� N �� 1 �� 100, � � ������!\n";
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
		cout << "N ������ " << m << " (1 ��, 2 ���, 3 �����)? " << endl;
		cin >> ans;
		N /= 2;
		i++;
	}

	cout << "�� �������� " << m << "! � � �������!\n���������� �������: " << i << endl;
	return 0;
}