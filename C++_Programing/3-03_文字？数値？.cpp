
/*
	�����R�[�h

	�v�_
	�E�����͒ʂ��ԍ��ň���
	�E���̒ʂ��ԍ��̂��Ƃ𕶎��R�[�h�ƌ���
	�E��{�I�ɔ��p�����͂P�o�C�g�A�S�p�����͂Q�o�C�g�̂��Ƃ�����
*/

#include <iostream>
using namespace std;

void ShowCode(char ch)
{
	cout << "�u" << ch << "�v�ɂӂ�ꂽ�ԍ��� " << (int)(unsigned char)ch << " �ł��B" << endl;
}

int main()
{
	ShowCode('0');
	ShowCode('A');

	getchar();
	return 0;
}