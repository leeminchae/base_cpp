#include <iostream>

using namespace std;

class A {
public:
	virtual void Init() = 0;
};

class B : public A {
public:
	virtual void Init() { cout << "개발자까지 : " << endl; }
};


int main() {
	A* a = new B;
	B* b = new B;

	a->Init();
	b->Init();
	return 0;
}