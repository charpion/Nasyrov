#include <iostream>
#include <vector>
//#include<algorithm>

using namespace std;

void sort(vector <int>& a, int l, int r);

int main() {
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, 0, a.size() - 1); // сортируем

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}

void sort(vector <int>& a, int l, int r) {
	int mid = a[(l + r) / 2];
	int i = l, j = r;
	while (i < j) {
		while (a[i] < mid) {
			i++;
		}
		while (a[j] > mid) {
			j--;
		}
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (j > l) {
		sort(a, l, j);
	}
	if (i < r) {
		sort(a, i, r);
	}
}