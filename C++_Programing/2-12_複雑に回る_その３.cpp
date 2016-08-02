
/*
	3つ目のパターン

	別に変数aを用意して、その値をループの条件にする
*/

#include <iostream>
using namespace std;

int main()
{
	int i, a = 0;

	for (i = 0; a < 10; ++i)
	{
		cout << i << ", " << a << endl;
		a += 2;
	}
	getchar();
	return 0;
}