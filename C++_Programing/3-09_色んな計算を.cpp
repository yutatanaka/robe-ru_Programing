
/*
	数学関数

	要点
	・小数の型には精度の違うfloat型、double型、long double型の3種類がある。
	・小数の演算はdouble型で行うのが基本
	・数学関数は cmath　ヘッダファイルで宣言されている。
*/

#include <iostream>
#include <cmath>		// 数学関数が格納されている
using namespace std;

int main()
{
	double a, b;

	cout << "直角を挟む 2 辺の長さを入力してください >" << flush;
	cin >> a >> b;

	cout << "斜辺の長さは " << sqrt(a * a + b * b) << " です。" << endl;

	getchar();
	return 0;
}
