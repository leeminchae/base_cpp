#include <iostream>

using namespace std;

class Player {
private :
	int hp;

public:
	void SetHP(int _hp);
};

void Player::SetHP(int _hp) {
	if (_hp >= 0 && _hp <= 20) {
		hp = _hp;
	}
	else {
		cout << "알맞은 값이 들어오지 않았습니다. \n값 : " << _hp << endl;
	}
}

int main() {
	Player player;
	player.SetHP(-20);

	return 0;
}