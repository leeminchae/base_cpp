#include <iostream>

using namespace std;

int main() {
	string text1 = "�ĸͿ���  �����ڱ���";
	text1.insert(9, "���� ");
	cout << text1 << endl;

	string text2 = "�ĸͿ������� �����ڱ���";
	text2.replace(0, 13, "���� ");
	cout << text2 << endl;

}