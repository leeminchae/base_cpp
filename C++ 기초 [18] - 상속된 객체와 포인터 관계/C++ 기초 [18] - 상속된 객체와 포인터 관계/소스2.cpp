#include <iostream>

using namespace std;

class Object {
public:
	void Move() {
		cout << "object ¿òÁ÷ÀÓ" << endl;
	}
};

class PlayerMovement :public Object {
public:
	void Jump() {
		cout << "Jump" << endl;
	}
};

class Player :public PlayerMovement {
public:
	void Att() {
		cout << "Player Att" << endl;
	}
};

int main() {
	Player* player = new Player;

	player->Move();
	player->Att();
	player->Jump();

	return 0;
}