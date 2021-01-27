#include <iostream>

using namespace std;

class Player {
public:
	int hp;
	int mp;

	Player() {}
	Player(int _hp, int _mp) {
		hp = _hp;
		mp = _mp;
	}
};

int main()
{
	Player* player = new Player(10, 20);

	cout << "HP : " << player->hp << endl;
	cout << "MP : " << player->mp << endl;

	return 0;
}