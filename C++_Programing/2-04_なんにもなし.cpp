
/*
	���ɂ��Ȃ�(void�^)

	�v�_
	�E�߂�l���v��Ȃ����͖߂�l�̌^��void�ɂ���
	�E�������v��Ȃ����̓J�b�R�̒�����ɂ���B
	�E�֐��ɂ͕K���J�b�R���v��

	<�o�͌���>
	f(1, 2) = 4
	f(182, 144) = 508
*/

#include <iostream>
using namespace std;

int f(int x, int y)
{
	return 2 * x + y;
}

void Show(int x, int y)
{
	cout << "f(" << x << ", " << y << ") = " << f(x, y) << endl;
}

int main()
{
	Show(1, 2);
	Show(182, 144);

	getchar();
}
