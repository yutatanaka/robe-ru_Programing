
/*
	if文（２）

	要点
	・if文は変数などがある値を取った時の処理を決めるために使われる。

	<出力結果>
	1番目の値を入力してください > 15
	2番目の値を入力してください > 4
	15 / 4 = 3 ... 3
	1番目の値を入力してください > 5
	2番目の値を入力してください > 0
	0では割れません。
*/

#include <iostream>
using namespace std;

void Divide()
{
	int a, b;

	cout << "1番目の値を入力してください >" << flush;
	cin >> a;

	cout << "2番目の値を入力してください >" << flush;
	cin >> b;

	if (b == 0)
	{
		cout << "0では割れません。" << endl;
	}
	else
	{
		cout << a << " / " << b << " = "
			<< a / b << "..." << a % b << endl;
	}
}

int main()
{
	Divide();
	Divide();

	getchar();
	getchar();
}