#include <iostream>

using namespace std;

class Player {
public:
	Player() { cout << "�������!" << endl; }
	~Player() { cout << "�������!" << endl; }
};

int main()
{
	Player* player = new Player;
	cout << "�����..." << endl;
	delete player;

	return 0;
}