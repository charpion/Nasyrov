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
	cout << "������� �����: ";
	cin >> a;

	for (int i = 1; i <= a.size(); i++) { // ���������� ����� ��������
		b.push_back('-');
	}

	cout << b << endl;

	while (a != b) {
		cout << "������� �����: ";
		cin >> s;
		k = 0;
		for (int i = 0; i <= a.size() - 1; i++) {
			if (a[i] == s) {
				b[i] = s;
				k++;
			}
		}
		if (k == 0) {
			cout << "��� ����� ����� :(" << endl;
		}
		else if (k != 0 && a != b) {
			cout << "�� ������� :)" << endl;
		}
		if (a != b)
			cout << b << endl;
	}

	cout << "�� ������� ����� - " << b << "! ����������!" << endl;

	return 0;
}