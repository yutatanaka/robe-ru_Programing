
/*
	���g��ς��悤(�ϐ������������Z)

	�v�_
	�E�ϐ��ɂ͐錾���ɒl������邱�Ƃ��ł���B
	�E�ϐ��̒l��ς���ɂ�+=�A++�Ȃǂ̉��Z�q���g��
	�Ea = a * 5 + 2;�Ȃǂ��������ł͂Ȃ�����ł���B
	�E�R�����g��//�ɑ�����
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	// �ϐ��ւ̒l�̑�������
	a += 2;
	cout << "a += 2        -> a = " << a << endl;

	// �C���N�������g
	++a;
	cout << "++a           -> a = " << a << endl;

	// ���G�Ȍv�Z��
	a = a * 5 + 2;
	cout << "a = a * 5 + 2 -> a = " << a << endl;

	getchar();
}