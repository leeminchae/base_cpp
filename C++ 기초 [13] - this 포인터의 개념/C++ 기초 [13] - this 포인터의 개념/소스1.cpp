#include <iostream>

using namespace std;

class Player
{
private:
	int hp;
public:
	void SetHP(int hp)
	{
		hp = hp;
	}

	int GetHP()
	{
		return this->hp;
	}
};

int main() {
	Player* player = new Player;
	player->SetHP(10);
	cout << player->GetHP();

	return 0;
}