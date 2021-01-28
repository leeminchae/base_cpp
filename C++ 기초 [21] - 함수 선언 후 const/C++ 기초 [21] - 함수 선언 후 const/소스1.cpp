#include <iostream>

using namespace std;

class cls {
private :
	int a = 10;

public:
	void b() const{
		cout << "das" << endl;
	}
	void print() const {
		cout << "Das" << endl;
		b();
	}
};

int main() {
	cls c = cls();
	c.print();
}