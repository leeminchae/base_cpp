#include <iostream>

using namespace std;

class Object {
protected:
	int x, y;
public:
	virtual void Init(int _x, int _y) = 0;

	void print() { cout << x << " " << y << endl; }
};

class Player : public Object {
	virtual void Init(int _x, int _y) { x = _x, y = _y; }
};

int main() {
	Object* player = new Player;
	player->Init(1, 2);
	player->print();
}