
/*
	5つ目のパターン

	最初と最後のパラメータを省略できた。真ん中は省略できるかどうか？
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	for ( ; ; )
	{
		cout << a << ' ';
		++a;
	}
	cout << endl;

	getchar();
	return 0;
}