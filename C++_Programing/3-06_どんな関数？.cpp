
/*
	�֐��v���g�^�C�v

	�v�_
	�E�֐��v���g�^�C�v��錾����Ί֐���`����񂵂ɂ��邱�Ƃ��ł���B
	�E�֐��v���g�^�C�v�͊֐��̒��g�������Ȃ������̂��́B
*/

#include <iostream>
using namespace std;

int f(int x, int y);		// �v���g�^�C�v�錾

int main()
{
	cout << "f(1, 2) = " << f(1, 2) << endl;
	cout << "f(182, 144) = " << f(182, 144) << endl;

	getchar();
	return 0;
}

int f(int x, int y)
{
	return 2 * x + y;
}