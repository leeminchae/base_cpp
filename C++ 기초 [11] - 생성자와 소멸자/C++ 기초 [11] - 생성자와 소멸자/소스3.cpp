#include <iostream>

using namespace std;

class Player {
public:
	Player() { cout << "생성됬다!" << endl; }
	~Player() { cout << "사라졌다!" << endl; }
};

int main()
{
	Player* player = new Player;
	cout << "잠시후..." << endl;
	delete player;

	return 0;
}