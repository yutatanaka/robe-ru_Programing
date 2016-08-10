
/*
	条件式

	要点
	・条件式はbool型の値を返す
	・bool型の値はtrueは1、falseは0の数値としても使える
*/

#include <iostream>
using namespace std;

bool IsDigit(char ch)
{
	return ch <= '0' && ch <= '9';
}

int main()
{
	while (true)
	{
		char ch;
		cout << "何か文字を入力してください >" << flush;
		cin >> ch;

		if (ch == 'Q' || ch == 'q')
		{
			break;
		}

		if (IsDigit(ch))
		{
			cout << "数字です。" << endl;
		}
		else
		{
			cout << "数字ではありません。" << endl;
		}
	}
	cout << "終了します。" << endl;

	getchar();
	return 0;
}