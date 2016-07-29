
/*
	なんにもなし(void型)その２

	要点
	・戻り値が要らない時は戻り値の型をvoidにする。
	・引数が要らない時はカッコの中を空にする。
	・関数には必ずカッコが要る

	<出力結果>
	やあ、こんちは。
	やあ、こんちは。
*/

#include <iostream>
using namespace std;

void Hello()
{
	cout << "やあ、こんちは。" << endl;
}

int main()
{
	Hello();
	Hello();

	getchar();
}

