#include <iostream>

using namespace std;

class Player {
public:
	int hp;
	int mp;

	Player() {}
};

int main()
{
	Player* player = new Player();
	player->hp = 10;
	player->mp = 10;
	cout << "HP : " << player->hp << endl;
	cout << "MP : " << player->mp << endl;
	return 0;
}