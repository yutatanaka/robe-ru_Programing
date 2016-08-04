
/*
	switch文

	要点
	・switch(式){ 分岐 } を使うと多条件分岐になる
	・式がcase値：で示す値の時、そこへ飛ぶ。
	・それ以外の場合はdefault:に飛ぶ
	・switch文を抜けるにはbreak文を使う。

	if文で行うパターン
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int a, b, op, result;

		cout << "第 1 項 >" << flush;
		cin >> a;
		cout << "第 2 項 >" << flush;
		cin >> b;
		cout << "1: 加算, 2: 減算, 3: 乗算, 4: 除算 >" << flush;
		cin >> op;

		if (op == 1)
		{
			result = a + b;
		}
		else if (op == 2)
		{
			result = a - b;
		}
		else if (op == 3)
		{
			result = a * b;
		}
		else if (op == 4)
		{
			result = a / b;
		}
		else
		{
			cout << "真面目にせんかい！" << endl;
			continue;
		}
		cout << "答えは" << result << " です。" << endl;
	}
	getchar();
	return 0;
}