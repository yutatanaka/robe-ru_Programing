
/*
	その値は俺が決める（入力）

	要点
	・値の入力を行うにはその値を入れる変数が必要。
	・値の入力は cin >> 変数;とする。

	<出力結果>
	何か値を入れてね > 62
	その数を 3 で割った余りは 2 です。
*/

#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "何か値を入れてね > " << flush;			/* flush　改行をしない */
	cin >> a;

	cout << "その数を 3 で割った余りは " << a % 3 << " です。" << endl;

	getchar();
	getchar();
	return 0;
}