#include <iostream>

using namespace std;

int main() {
	string text1 = "hello";
	cout << text1.at(0) << endl;
	cout << text1[1] << endl;

	string text2 = "�ĸͿ��� �����ڱ���";
	cout << text2.at(0);
	cout << text2.at(1) << endl;
}