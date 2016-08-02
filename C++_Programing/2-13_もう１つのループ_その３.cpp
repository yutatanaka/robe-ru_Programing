
/*
	while、do-while文その３

	逆にループの最後で判定するものは？　中身が最低でも一回は実行されるものはないのだろうか？
*/

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do{

		cout << "この文は表示されるかな？" << endl;

	} while (i == 1);

	getchar();
	return 0;
}