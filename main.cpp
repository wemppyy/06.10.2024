#include <iostream>

using namespace std;

int add(int a, int b) {
	return a + b;
}
int dif(int a, int b) {
	return a - b;
}
int mul(int a, int b) {
	return a * b;
}
int division(int a, int b) {
	return a / b;
}

void get_action(int(*calc_functions[4])(int, int), int index, int a, int b) {
		cout << "Result = " << calc_functions[index](a, b) << endl;
}

int main() {
	/*int a, b, c;
	const int size = 4;
	cout << "Enter two nums: ";
	cin >> a >> b;
	cout << "Choose operation (1. +, 2. -, 3. *, 4. /): " << endl;
	cin >> c;
	int(*calc_functions[size])(int, int) = { add, dif, mul, division };
	get_action(calc_functions, c-1, a, b);*/


	return 0;
}