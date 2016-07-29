
/*
	値の保管所(変数の使い方)

	要点
	・変数は何らかの値を入れておける入れ物
	・変数は宣言してから使う。
	・変数へは＝を使って値をいれることができる。
	・変数名は書けば変数に入っている値の代わりになる。
*/

#include <iostream>
using namespace std;

int main()
{
	int a;

	a = 0;
	cout << "a = " << a << endl;

	a = 5;
	cout << "2a = " << a * 2 << endl;

	getchar();
}