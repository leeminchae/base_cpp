#include <iostream>

using namespace std;

class Player {
public:
	int hp = 10;
	int mp;
};

int main() {
	Player* player = new Player;
	cout << player->hp << endl;

	return 0;
}