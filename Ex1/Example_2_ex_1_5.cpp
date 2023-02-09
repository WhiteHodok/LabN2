#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    //Ex1
    cout << "How old are you? " << endl;
    double age;
    cin >> age;
    cout << "Your age is: " << age << " ?" << endl;
    //Ex 2
    if (age < 18) {
        cout << "You`re not adult" << endl;
    }
    //Ex 3
    else if (age > 18 && age < 30) {
        cout << "You are in the prime of your life" << endl;
    }
    else if (age == 18) {
        cout << "You`re adult" << endl;
    }
    //Ex 4
    else if (age >= 30 && age < 60) {
        cout << "You`re mature person" << endl;
    }
    else {
        cout << "You`re old" << endl;
    }

    return 0;
}
