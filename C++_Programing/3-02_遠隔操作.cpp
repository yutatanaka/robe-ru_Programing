
/*
	�Q��(1)

	�v�_
	�E�������́A�֐����Ă񂾎��ɐV���ɕϐ�������A���̕ϐ����������̒l�ŏ����������Ƃ����d�g��
	�E�Q�Ƃ��g���Ί֐��z���ɕϐ��𑀍�ł���B
	�E�Q�Ƃ͌^����&�������^�Œ�`����B
	�E�Q�Ƃ̎Q�Ɛ��r������ύX���邱�Ƃ͂ł��Ȃ��B
	�E�Q�Ƃ͕K�����������Ȃ���΂Ȃ�Ȃ��B

	<���s��>
*/

#include <iostream>
using namespace std;

void WesternToShouwa(int x)
{
	if (1926 <= x && x <= 1989)
	{
		x -= 1925;
	}
	else
	{
		x = 0;
	}
}

void Shouwa()
{
	int year;

	cout << "�������͂��Ă������� >" << flush;
	cin >> year;

	WesternToShouwa(year);
	if (year != 0)
	{
		cout << "���̔N�͏��a " << year	<< " �N�ł��B" << endl;
	}
	else
	{
		cout << "���̔N�͏��a�ł͂���܂���B" << endl;
	}
}

int main()
{
	Shouwa();
	Shouwa();

	getchar();
	return 0;
}