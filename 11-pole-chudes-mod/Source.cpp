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
	cout << "������� �����: ";
	cin >> a;

	for (int i = 1; i <= a.size(); i++) { // ���������� ����� ��������
		b.push_back('-');
	}

	cout << b << endl;

	while (a != b) {
		cout << "������� ����� ��� �������� �����: ";
		cin >> s;

		if (s.size() > 1 && s == a) { // �������� �����
			cout << "�� ������� ����� - " << s << "! ����������!" << endl;
			return 0;
		}

		else if (s.size() > 1 && s != a) { // �������� �����
			cout << "� ���������, �� �� ������� �����. �� ���������." << endl;
			return 0;
		}

		else { // �������� �����
			if (letters.find(s[0]) == letters.end()) { //�������� �� ��� ��������� �����
				letters.insert(s[0]);
				k = 0;
				for (int i = 0; i <= a.size() - 1; i++) {
					if (a[i] == s[0]) {
						b[i] = s[0];
						k++; // ������� ��������� ����� � ����� �� ��������� �����
					}
				}
				if (k == 0) {
					cout << "��� ����� ����� :(" << endl;
				}
				else if (k != 0 && a != b) {
					cout << "�� ������� :)" << endl;
				}
				if (a != b) // ����� ����� ����� ���������� �����
					cout << b << endl;
			}
			else {
				cout << "��� ����� ��� ����, ���������� ��� ���." << endl;
			}
		}
	}

	cout << "�� ������� ����� - " << b << "! ����������!" << endl;

	return 0;
}