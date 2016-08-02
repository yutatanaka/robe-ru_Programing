
/*
	for文（3）

	要点
	・for文の書式はfor(初期設定文 条件式; 再設定式) {実行文}である。
	・まず初期設定文が実行される。
	・あとは条件式、実行文、再設定式の順に、条件式が真の間繰り返し実行される。
	・条件式は初期設定文実行後すぐにも評価される。
	・省略できるパラメータは省略できる。
*/

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	for (i = 5; i < 10; i += 2)
	{
		cout << i << ' ';
	}
	cout << endl;

	getchar();
	return 0;
}