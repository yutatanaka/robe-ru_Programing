
/*
	関数プロトタイプ

	要点
	・関数プロトタイプを宣言すれば関数定義を後回しにすることができる。
	・関数プロトタイプは関数の中身を書かないだけのもの。
*/

#include <iostream>
using namespace std;

int f(int x, int y);		// プロトタイプ宣言

int main()
{
	cout << "f(1, 2) = " << f(1, 2) << endl;
	cout << "f(182, 144) = " << f(182, 144) << endl;

	getchar();
	return 0;
}

int f(int x, int y)
{
	return 2 * x + y;
}