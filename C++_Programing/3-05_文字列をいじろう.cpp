
/*
	�����񑀍�֐�

	�v�_
	�E��������Ō�܂ő�������ꍇ�A�k���^�[�~�l�[�^�������܂ŏ�������΂悢�B
	�Esprintf�ŕ������ҏW�ł���B
	�Eprintf�ŕ������ҏW�����`�ŕ\���ł���B
*/

#include <iostream>
using namespace std;

int main()
{
	char hello[] = "Hello!";

	hello[4] = '\0';
	cout << "[" << "]�𕶎��R�[�h�ɕς����" << endl;

	for (int i = 0; hello[i] != '\0'; ++i)
	{
		cout << (int)(unsigned char)hello[i] << ", ";
	}
	cout << 0 << endl << "�ɂȂ�܂��B" << endl;

	getchar();
	return 0;
}