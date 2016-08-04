
/*
	参照(1)

	要点
	・仮引数は、関数を呼んだ時に新たに変数が作られ、その変数が実引数の値で初期化されるという仕組み
	・参照を使えば関数越しに変数を操作できる。
	・参照は型名に&をつけた型で定義する。
	・参照の参照先を途中から変更することはできない。
	・参照は必ず初期化しなければならない。

	<失敗例>
*/

#include <iostream>
using namespace std;

void WesternToShouwa(int x)
{
	if (1926 <= x && x <= 1989)
	{
		x -= 1925;
	}
	else
	{
		x = 0;
	}
}

void Shouwa()
{
	int year;

	cout << "西暦を入力してください >" << flush;
	cin >> year;

	WesternToShouwa(year);
	if (year != 0)
	{
		cout << "その年は昭和 " << year	<< " 年です。" << endl;
	}
	else
	{
		cout << "その年は昭和ではありません。" << endl;
	}
}

int main()
{
	Shouwa();
	Shouwa();

	getchar();
	return 0;
}