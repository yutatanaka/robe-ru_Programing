
/*
	while文、do-while文

	要点
	・while文(条件式) { 実行文 }で条件式が真の間ずっと実行文が実行される。
	・条件式の判定はループの初めに判定される。
	・do{ 実行文 } while(条件式); を使うと条件式はループの終わりに判定される。
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	while (a < 10)
	{
		cout << a << " ";
		a += 2;
	}
	cout << endl;

	getchar();
	return 0;
}