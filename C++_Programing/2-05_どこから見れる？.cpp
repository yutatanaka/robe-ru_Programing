
/*
	どこから見れる？(グローバル変数とローカル変数)

	要点
	・関数の外で宣言した変数はそれ以降に書かれた関数すべてで使える。
	・関数の中で宣言した変数はその関数内でしか使えない。
	・関数の中で宣言した変数はその関数が終わる時に破棄される。

	<出力結果>
	エラーコード
*/

#include <iostream>
using namespace std;

int a = 0;

void Test()
{
	int b = 1;
	cout << a << b << c << d << endl;
}

int c = 2;

int main()
{
	int d = 3;
	Test();
	cout << a << b << c << d << endl;
}