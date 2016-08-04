
/*
	文字コード

	要点
	・文字は通し番号で扱う
	・その通し番号のことを文字コードと言う
	・基本的に半角文字は１バイト、全角文字は２バイトのことが多い
*/

#include <iostream>
using namespace std;

void ShowCode(char ch)
{
	cout << "「" << ch << "」にふられた番号は " << (int)(unsigned char)ch << " です。" << endl;
}

int main()
{
	ShowCode('0');
	ShowCode('A');

	getchar();
	return 0;
}