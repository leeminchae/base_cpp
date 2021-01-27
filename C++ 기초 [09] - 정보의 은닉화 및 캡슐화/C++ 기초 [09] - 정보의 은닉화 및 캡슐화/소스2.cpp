#include <iostream>

using namespace std;

class Player {
private:
	int hp;
	int mp;
public:
	void SetHP(int _hp);
	void SetMP(int _mp);

	void printData();
};

void Player::SetHP(int _hp) {
	if (_hp >= 0 && _hp <= 20) {
		hp = _hp;
	}
	else {
		cout << "알맞은 값이 들어오지 않았습니다. \n값 : " << _hp << endl;
	}
}

void Player::SetMP(int _mp) {
	if (_mp >= 0 && _mp <= 20) {
		mp = _mp;
	}
	else {
		cout << "알맞은 값이 들어오지 않았습니다. \n 값 : " << _mp << endl;
	}
}

void Player::printData() {
	cout << "HP : " << hp << " MP : " << mp << endl;
}

int main() {
	Player player;
	player.SetHP(10);
	player.SetMP(10);
	player.printData();
	return 0;
}