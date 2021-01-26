#include <iostream>

using namespace std;

namespace Player {
	namespace a {

		namespace b {
			int att;
			int hp;

			void SetAtt(int _att) { att = _att; }
			void SetHp(int _hp) { hp = _hp; }
		}

	}
}

namespace PlayerAB = Player::a::b;

int main() {
	Player::a::b::SetAtt(5);
	cout << PlayerAB::att << endl;

	return 0;
}