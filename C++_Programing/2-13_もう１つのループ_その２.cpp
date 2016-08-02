
/*
	while、do-while文その2

	最初から条件式が失敗するようにして試してみよう。
*/

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	while (i == 1)
	{
		cout << "この文は表示されるかな？" << endl;
	}

	getchar();
	return 0;
}