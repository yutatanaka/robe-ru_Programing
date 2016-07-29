
/*
	何か入れたら何か出た(関数の作り方)
	
	要点
	・関数は引数と戻り値を持っている。
	・関数は定義しなければ使えない。

	<出力結果>
	f(1, 2) = 4
	f(182, 144) = 508
*/

#include <iostream>
using namespace std;

int f(int x, int y)
{
	return  2 * x + y;
}

int main()
{
	cout << "f(1, 2) = " << f(1, 2) << endl;

	cout << "f(182, 144) = " << f(182, 144) << endl;

	getchar();
}