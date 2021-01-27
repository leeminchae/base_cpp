#include <iostream>

using namespace std;

class Player {
private :
	int hp;
	int mp;
};

int main() {
	Player* player = new Player;
	cout << player->hp << endl;

	return 0;
}