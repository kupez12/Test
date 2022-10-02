#include<iostream>
using namespace std;
int main() {
	float a, b, c, v, s;
	cout << "Vvedite storonu A: ";
	cin >> a;
	cout << "Vvedite storonu B: ";
	cin >> b;
	cout << "Vvedite storonu C: ";
	cin >> c;
	v = a * b * c;
	s = 2 * (a * b + b * c + a * c);
	cout << "V = " << v << endl;
	cout << "S = " << s;
	return 0;
}