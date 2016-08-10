
/*
	ポインタ(1)

	要点
	・ポインタはアドレスを格納するための変数
	・ある型のアドレスを格納するポインタは 型*変数名; という形で宣言する。
*/

#include <iostream>
using namespace std;

int main()
{
	char a;
	char* p;

	p = &a;
	cout << " p = " << (size_t)p << endl;
	cout << "&a = " << (size_t)&a << endl;

	getchar();
	return 0;
}