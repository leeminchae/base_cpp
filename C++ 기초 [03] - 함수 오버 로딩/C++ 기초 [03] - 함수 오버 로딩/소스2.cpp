#include <iostream>

using namespace std;

void print(int _n) {
	cout << _n << endl;
}

void print(int _n1, int _n2) {
	cout << _n1 << " " << _n2 << endl;
}

int main() {
	print(1);
	print(1, 2);

	return 0;
}