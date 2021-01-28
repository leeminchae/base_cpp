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
	box->name = "컴맹에서 개발자까지";   // 여기서 막힘
	box->posX = 10;
	box->posY = 10;
	printf("%s\n", box->name);
	printf("X : %d Y: %d\n", box->posX, box->posY);
}