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
		cout << "�˸��� ���� ������ �ʾҽ��ϴ�. \n�� : " << _hp << endl;
	}
}

int main() {
	Player player;
	player.SetHP(-20);

	return 0;
}