#include <iostream>

using namespace std;

void print(int a, int b, int c=10) {
	cout << a << " " << b << " " << c << endl;
}

void print(int a) {
	cout << a << endl;
}

int main() {
	print(1);
	print(1, 2);
	print(1, 2, 20);

	return 0;
}