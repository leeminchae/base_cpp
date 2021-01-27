#include <iostream>

using namespace std;

class Monster {
public:
	int hp;
	int mp;

	int GetHP() { return hp; }

	Monster() {}
	~Monster() {}
};

int main() {
	Monster* monster[5];

	for (int i = 0; i < 5; i++) {
		monster[i] = new Monster();
		monster[i]->hp = i * 10;
	}

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 몬스터 : " << monster[i]->GetHP() << endl;
	}

	return 0;
}