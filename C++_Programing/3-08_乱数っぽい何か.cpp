
/*
	疑似乱数

	要点
	・疑似乱数はrandで取得できる
	・疑似乱数はsrandで初期化できる。
	・初期化には時間を利用するとよい。
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice()
{
	return rand() % 6 + 1;
}

int main()
{
	for (int i = 0; i < 20; ++i)
	{
		cout << Dice() + Dice() << ' ';
	}
	cout << endl;

	getchar();
	return 0;
}