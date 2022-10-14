#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

const string alpha = "����������������������������";

bool is_ru_upper(char c) {
	return (c >= '�') && (c <= '�');
}

char to_lower(char& a) {
	if (is_ru_upper(a)) {
		a = a - '�' + '�';
	}
	return a;
}

string yearToTrack(int n, string t[]) {
	int a = n / 1000 + (n / 100) % 10 + (n / 10) % 10 + n % 10;
	int b = a / 10 + a % 10 - 1;
	return t[b];
}

string nameToFilm(string name, string f[]) {
	int n = alpha.find(to_lower(name[0]));
	return f[n];
}

string surnameToVip(string surname, string v[]) {
	int n = alpha.find(to_lower(surname[0]));
	return v[n];
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string films[28] = {"���������� �������", "��������� ������", "����", "����� �����", "�������-����", "�����, ������, ��� ������", "�������� �", "������ ������",
					    "�����", "�������� �������", "������", "����� ������ � ����� ��������", "����� ������ � ����� ����", "����� ������ � ����� �������",
						"������������ �����", "���� ����������", "��� �������", "���� ����", "������� ������", "������ ������", "������", "�������", "���� ���",
						"��������", "������������ �����", "12 ��� �������", "����", "���� 200"
	};
	string vips[28] = {"������ ����", "������ ����� ��.", "������� ������", "���� ���������", "������ ���", "����� �����������", "���� ̸���", "���� �����",
					   "����� ����������", "������� ��������", "�����������", "����������", "����������", "���� ����", "������ ����", "������ ��������",
					   "����� �������", "��� �����", "��������� �������", "������ �������", "������� �����", "���� ����", "���� ��������", "����� ������",
					   "���� ������", "���� �����", "��� ������", "������� �����������"

	};
	string tracks[9] = { "Michael Jackson - \"Billie Jean\"", "���� - \"����� �� �����\"", "�������� - \"25 � 10\"", "Hugo - \"99 Problems\"", "Stromae - \"Alors on dance\"",
						"���� ���� - \"���� ������� ���\"", "���������� - \"����\"", "PHARAOH - \"���� ��������\"", "Tobu - \"Candyland\""

	};
	string name, surname, year;
	cout << "������, � ��� ���� ������� ���������������� �������� ��� ���. ������ ������ ����?\n����� ������� ���� ���, ������� � ��� ��������." << endl;
	cout << "���: ";
	cin >> name;
	cout << "�������: ";
	cin >> surname;
	cout << "��� ��������: ";
	cin >> year;
	cout << "�����! ��� ����� - ��� " + nameToFilm(name, films) + ". ���� ������ - " + surnameToVip(surname, vips) + "!" << endl <<
		"��������� ��� ��� �� ������� - " + yearToTrack(stoi(year), tracks) + "." << endl; 
	//char a = '�';
	//cout << to_lower(a);
	return 0;
}