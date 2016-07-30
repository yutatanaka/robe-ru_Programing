
/*
	配列変数

	要点
	・int a[個数]; で 個数 個の変数を一気に作ることができる。このaを配列変数ち言う。
	・配列変数はa[0], a[1],...というふうに使う。
	・インデックス（カッコ内の数字）は0から始まる

	<出力結果>
	a[0] = 1
	a[0] = 1
	a[0] = 3
*/

#include <iostream>
using namespace std;

int main()
{
	int a[2];

	a[0] = 1;
	cout << "a[0] = " << a[0] << endl;

	a[1] = 2;
	cout << "a[0] = " << a[0] << endl;

	a[0] = 3;
	cout << "a[0] = " << a[0] << endl;

	getchar();
	return 0;
}