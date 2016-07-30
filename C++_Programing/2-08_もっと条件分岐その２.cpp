
/*
	if文(３)

	<出力結果>
	西暦を入力してください > 1979
	その年は昭和 54 年です。
	西暦を入力してください > 1999
	その年は昭和ではありません。
*/

#include <iostream>
using namespace std;

// 西暦を昭和に変換します。
// 変な値が渡された場合は 0 を返します。

int WestrnToShouwa(int western)
{
	if (1926 <= western && western <= 1989)
	{
		// 入力された西暦から1925を引いて、昭和に変換
		return western - 1925;
	}
	else
	{
		return 0;
	}
}

void Shouwa()
{
	int western;

	cout << "西暦を入力してください >" << flush;
	cin >> western;

	int shouwa = WestrnToShouwa(western);
	if (shouwa == 0)
	{
		cout << "その年は昭和ではありません。" << endl;
	}
	else
	{
		cout << "その年は昭和" << shouwa << " 年です。" << endl;
	}
}

int main()
{
	Shouwa();
	Shouwa();

	getchar();
	return 0;
}