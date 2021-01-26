#include <iostream>

using namespace std;

inline int Min(int x, int y) {
	return x > y ? y : x;
}

int main() {
	cout << Min(5, 9) << endl;

	return 0;
}