#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	double t;
	double t1;
	cout << "This programm will help you with Farenheit and Celsium temperature" << endl;
	cout << "Input temperature in Farenheit here : " << endl;
	cin >> t;
	if (t <= 32) {
		cout << "The temperature below then point of frost" << endl;
	}
	else if (t > 32) {
		t1 = (t - 32) * (5.0 / 9.0);
		cout << "The temperature of Celsium is : " << t1 << endl;
	}


}

