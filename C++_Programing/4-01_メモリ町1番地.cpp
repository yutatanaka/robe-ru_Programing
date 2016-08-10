
/*
	メモリとアドレス

	要点
	・メモリは使用中のデータを置いておくところ
	・基本的に、メモリ上の位置のことをアドレス(メモリアドレス)という。
	・アドレスは、普通の変数の場合は前に&をつけることで、配列変数と関数の場合はその名前を書くことで取得できる。
*/

#include <iostream>
using namespace std;

void Foo()
{
	int a;
	char b[10];
	cout << "a   : " << (size_t)&a << endl
		<< "b   : " << (size_t)b << endl
		<< "Foo : " << (size_t)Foo << endl;
}

int main()
{
	Foo();
	getchar();
	return 0;
}