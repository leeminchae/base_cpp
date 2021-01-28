#include <stdio.h>

class Player {
public:
	int hp;

	Player(int _hp) { hp = _hp; }
};

int main() {
	const Player player(5);
	printf("%d", player.hp);

	return 0;
}