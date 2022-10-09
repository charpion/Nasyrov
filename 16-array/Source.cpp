#include <iostream>
using namespace std;

int main() {
	int*** p = new int** [3]; // объ€вление
	for (int i = 0; i < 3; i++) { 
		p[i] = new int* [3];
		for (int j = 0; j < 3; j++) {
			p[i][j] = new int[3];
		}
	}
	int b = 0;
	for (int i = 0; i < 3; i++) { // заполнение
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				p[i][j][k] = b + k + 1;
			}
			b += 3;
		}
	}
	for (int i = 0; i < 3; i++) { // вывод
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cout << p[i][j][k] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	b = 0;
	for (int i = 2; i > -1; i--) { // заполнение
		for (int j = 2; j > -1; j--) {
			for (int k = 2; k > - 1; k--) {
				p[i][j][k] = b + 2 - k + 1;
			}
			b += 3;
		}
	}
	cout << "------------" << endl << endl;
	for (int i = 0; i < 3; i++) { //вывод
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				cout << p[i][j][k] << "  ";
			}
			cout << endl;
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) { // удаление
		for (int j = 0; j < 3; j++) {
			delete [] p[i][j];
		}
	}
	return 0;
}