
/*
	文字列

	要点
	・文字列は文字コードの羅列で表す
	・文字列の終わりには0をつける
	・文字列はchar型の配列変数に入れる。
	・文字列は配列変数の名前で扱う。
*/

#include <iostream>
using namespace std;

int main()
{
	char hello[] = "Hello!";

	cout << "[ " << hello << " ]を文字コードに変えると" << endl;

	for (int i = 0; i < (int)sizeof hello; ++i)
	{
		cout << (int)(unsigned char)hello[i] << ", " ;
	}
	cout << endl << "になります。" << endl;

	getchar();
	return 0;
}