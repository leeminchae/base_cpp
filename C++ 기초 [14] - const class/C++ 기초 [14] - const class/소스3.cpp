#include <stdio.h>

class Player {
public:
	int hp;
	Player() {}
	Player(int _hp) { hp = _hp; }
public:
	int GetHP() const { return hp; }

};

int main() {
	const Player player(5);
	printf("%d", player.GetHP());

	return 0;
}