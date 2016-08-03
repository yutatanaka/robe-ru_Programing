
/*
	break文、continue文

	要点
	・break文を使えばループを抜けられる
	・continue文を使えば実行文の終わりに飛べる
*/

#include <iostream>
using namespace std;

int main()
{
	for (;;)
	{
		int a, b;

		cout << "1 番目の値を入力してください >" << flush;
		cin >> a;

		cout << "2 番目の値を入力してください >" << flush;
		cin >> b;

		if (b == 0)
		{
			cout << "0 では割れません！" << endl;
			break;
		}

		cout << a << " / " << b << " = "
			<< a / b << " ... " << a % b << endl;
	}

	cout << "プログラムは終了しました。" << endl;

	getchar();
	return 0;
}