
/*
	#include 

	要点
	・#include を使えば別のファイル埋め込むことができる。
	・ファイルメ名を<>で囲めば設定されたフォルダの、""で囲めば今のフォルダのファイルを優先的にしらべる
	・主にファイルの先頭でインクルードするファイルをヘッダファイル
*/

#include "3-07_ハメコミ合成.h"
#include <iostream>
using namespace std;

int main()
{
	Hello();

	getchar();
	return 0;
}

void Hello()
{
	cout << "やあ、こんちは。" << endl;
}
