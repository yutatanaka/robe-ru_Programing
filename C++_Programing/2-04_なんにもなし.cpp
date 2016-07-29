
/*
	何にもなし(void型)

	要点
	・戻り値が要らない時は戻り値の型をvoidにする
	・引数が要らない時はカッコの中を空にする。
	・関数には必ずカッコが要る

	<出力結果>
	f(1, 2) = 4
	f(182, 144) = 508
*/

#include <iostream>
using namespace std;

int f(int x, int y)
{
	return 2 * x + y;
}

void Show(int x, int y)
{
	cout << "f(" << x << ", " << y << ") = " << f(x, y) << endl;
}

int main()
{
	Show(1, 2);
	Show(182, 144);

	getchar();
}
