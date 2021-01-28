#include <iostream>

using namespace std;

int main() {
	string text1 = "컴맹에서  개발자까지";
	text1.insert(9, "슈퍼 ");
	cout << text1 << endl;

	string text2 = "컴맹에서부터 개발자까지";
	text2.replace(0, 13, "슈퍼 ");
	cout << text2 << endl;

}