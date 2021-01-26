#include <iostream>

using namespace std;

namespace Player {
	int att;
	int hp;

	void SetAtt(int _att) { att = _att; }
	void SetHp(int _hp) { hp = _hp; }

}

int main() {
	Player::SetAtt(5);
	cout << Player::att << endl;

	return 0;
}