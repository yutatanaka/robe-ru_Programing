
/*
	4つ目のパターン
	
	iを削除してみる
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	for (; a < 10;)
	{
		cout << a << ' ';
		a += 2;
	}
	cout << endl;

	getchar();
	return 0;
}