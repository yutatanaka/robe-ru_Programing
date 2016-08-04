
/*
	型とキャスト

	・1ビットは0か1で表す
	・1バイトは基本的に１ビット
	・操作、記憶する際の最小単位はバイト
	・型や変数には大きさがあり、sizeof演算子で取得できる。
	・(型)を前につけると型を変更できる。これをキャストと言う。
*/

#include <iostream>
using namespace std;

int main()
{
	// 例えば
	signed char a;
	
	cout << sizeof a << endl;
////////////////////////////////////////////
	cout << sizeof(int) << endl;
////////////////////////////////////////////
	int n;
	cout << sizeof n << endl;
////////////////////////////////////////////
	int num;
	signed char b = -1;
	num = (unsigned char)b;

	cout << sizeof num << endl;

	getchar();
	return 0;
}