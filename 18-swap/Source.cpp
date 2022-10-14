#include <iostream>
using namespace std;

void swap1(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

void swap3(int& a, int& b) {
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
}

struct ab {
	int a;
	int b;
};

void swap4(ab& nums) {
	nums.a = nums.a + nums.b;
	nums.b = nums.a - nums.b;
	nums.a = nums.a - nums.b;
}

int main() {
	int a = 1;
	int b = 2;
	ab nums = { 1 , 2 };
	swap4(nums);
	cout << nums.a << "  " << nums.b << endl;
	return 0;
}