
/*
	文字列操作関数

	要点
	・文字列を最後まで走査する場合、ヌルターミネータが現れるまで処理すればよい。
	・sprintfで文字列を編集できる。
	・printfで文字列を編集した形で表示できる。
*/

#include <iostream>
using namespace std;

int main()
{
	char hello[] = "Hello!";

	hello[4] = '\0';
	cout << "[" << "]を文字コードに変えると" << endl;

	for (int i = 0; hello[i] != '\0'; ++i)
	{
		cout << (int)(unsigned char)hello[i] << ", ";
	}
	cout << 0 << endl << "になります。" << endl;

	getchar();
	return 0;
}