#include <stdio.h>

class Player {
public:
	static int hp, mp;

	int GetHP() { return hp; }

	Player() { }
	Player(int _hp) { hp = _hp; }
};

int Player::hp = 0;
int Player::mp = 0;

int main()
{
	Player player(5);

	Player player1;

	printf("�÷��̾�1 : %d\n", player.GetHP());
	printf("�÷��̾�2 : %d\n", player1.GetHP());
}