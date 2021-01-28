#include <iostream>

using namespace std;

class Object {
private:
	int posX;
	int posY;

public:

	int GetPosX() { return posX; }
	int GetPosY() { return posY; }

	Object() { cout << "Object 持失切" << endl; }

	Object(int _posX, int _posY) {
		posX = _posX;
		posY = _posY;
	}
};

class Player : public Object {
private:
	int hp;
	int mp;

public:
	Player() { cout << " Player 持失切 " << endl; }
	Player(int _posX, int _posY) : Object(_posX, _posY) {

	}
};

int main() {
	Player player(10, 10);
	cout << "X : " << player.GetPosX() << " Y : " << player.GetPosY() << endl;
}