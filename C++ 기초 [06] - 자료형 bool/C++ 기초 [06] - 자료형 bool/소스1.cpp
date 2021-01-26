#include <iostream>

using namespace std;

bool isMax(int Max, int Min) {
	if (Max > Min) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	if (isMax(52, 51)) {
		cout << "true" << endl;
	}

	else {
		cout << "false" << endl;
	}

	return 0;
}