
/*
	どこから見れる？(グローバル変数とローカル変数)その２

	<出力結果>
	1 <- a | b -> 1
	2 <- a | b -> 1
	3 <- a | b -> 1
*/

#include <iostream>
using namespace std;

int a = 0;

void Inc()
{
	int b = 0;
	++a;
	++b;
	cout << a << "<- a | b ->" << b << endl;
}

int main()
{
	Inc();
	Inc();
	Inc();
	getchar();
}