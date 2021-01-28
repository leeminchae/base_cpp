#include <iostream>

using namespace std;

class Object {
public:
	void Move() {
		cout << "object ¿òÁ÷ÀÓ" << endl;
	}
};

class PlayerMovememt : public Object {
public:
	void Jump() {
		cout << "Jump" << endl;
	}
};

class Player : public PlayerMovememt {
public:
	void Att(){
		cout << "Player Att" << endl;
	}
};

int main() {
	Object* object = new Object;
	Object* player = new Player;
	Object* movement = new PlayerMovememt;

	object->Move();
	player->Move();
	movement->Move();

	return 0;
}