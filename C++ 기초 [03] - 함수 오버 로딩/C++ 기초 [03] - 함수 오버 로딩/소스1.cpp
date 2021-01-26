#include <iostream>

using namespace std;

void print(int _n) {
	cout << _n << endl;
}

void print(const char* _n) {
	cout << _n << endl;
}

int main() {
	print(1);
	print("컴맹에서 개발자까지");

	return 0;
}
