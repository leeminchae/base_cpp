#include <iostream>

using namespace std;

class Monster {
public:
	int hp;
	int mp;

	Monster() {}
	~Monster() {}
};

int main() {
	Monster* monster[5];

	for (int i = 0; i < 5; i++) {
		monster[i] = new Monster;
	}

	return 0;
}