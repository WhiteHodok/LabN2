#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	char h;
	double t = 0;
	double t1 = 0;
	cout << "Temperature converter" << endl;
	cout << "Input c for Celsium or f for Farenheit : " << endl;
	cin >> h;
	if (h != 'c' && h != 'f') {
		cout << "Wrong type of temperature (f or c)";
		return 0;
	}
	cout << "Temperature is : " << endl;
	cin >> t;
	if (h == 'c') {
		t1 = (9.0 / 5.0) * (t + 32);
		cout << "Temperature in Farenheit: " << t1;
	}
	else if (h == 'f') {
		t1 = (t - 32) * (5.0 / 9.0);
		if (t <= 32) {
			cout << "Temperature is lower then point of frost";
		}
		else {
			cout << "Temperature in Celsium: " << t1;
		}
	}
	
	return 0;
}
