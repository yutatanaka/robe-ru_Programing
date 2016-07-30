
/*
	for文(その１)

	要点
	・for(int i = 0; i < 回数; ++i) { ... }で回数 回ループを行う。

	<出力結果>
	**********
	**********
	**********
	**********
	**********
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		cout << "**********" << endl;
	}

	getchar();
	return 0;
}