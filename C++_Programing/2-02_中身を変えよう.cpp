
/*
	中身を変えよう(変数を交えた演算)

	要点
	・変数には宣言時に値をいれることができる。
	・変数の値を変えるには+=、++などの演算子を使う
	・a = a * 5 + 2;なども方程式ではなく代入である。
	・コメントは//に続ける
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	// 変数への値の足し込み
	a += 2;
	cout << "a += 2        -> a = " << a << endl;

	// インクリメント
	++a;
	cout << "++a           -> a = " << a << endl;

	// 複雑な計算式
	a = a * 5 + 2;
	cout << "a = a * 5 + 2 -> a = " << a << endl;

	getchar();
}