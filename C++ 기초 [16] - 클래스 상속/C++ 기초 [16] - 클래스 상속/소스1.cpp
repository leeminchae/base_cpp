#include <iostream>

using namespace std;

class object {
public:
	char* name;

	int posX;
	int posY;

	object() { }
};

class Box : public object {
public:
	Box() {}
};

int main() {
	Box* box = new Box;
	box->name = "�ĸͿ��� �����ڱ���";   // ���⼭ ����
	box->posX = 10;
	box->posY = 10;
	printf("%s\n", box->name);
	printf("X : %d Y: %d\n", box->posX, box->posY);
}