#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

enum fun {
	LOGIT = 1,
	HEAV = 2,
	TAHN = 3
};

float H(float x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0.5;
	}
	else {
		return 0;
	}
}

float logit(float x) {
	return 1 / (1 + exp(-x));
}

class Neuron
{
public:
	Neuron() {
		weights = { 0 };
		size = 1;
		type = fun::LOGIT;
	}
	Neuron(vector <float> v, fun flag = fun::LOGIT) {
		weights = v;
		size = v.size();
		type = flag;
	}
	float calc(vector <float> x) {
		float lincomb = 0;
		for (int i = 0; i < size - 1; i++) {
			lincomb += weights[i] * x[i];
		}
		lincomb += weights[size - 1];

		if (type == fun::HEAV) {
			return H(lincomb);
		}
		else if (type == fun::LOGIT) {
			return logit(lincomb);
		}
		else {
			return tanh(lincomb);
		}
	}
private:
	vector <float> weights;
	int size;
	fun type;
};

int main(){
	Neuron n({ 1,1,1 }, TAHN);
	cout << n.calc({ 1,1 });
	return 0;
}