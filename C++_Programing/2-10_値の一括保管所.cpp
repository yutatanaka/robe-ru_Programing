
/*
	�z��ϐ�

	�v�_
	�Eint a[��]; �� �� �̕ϐ�����C�ɍ�邱�Ƃ��ł���B����a��z��ϐ��������B
	�E�z��ϐ���a[0], a[1],...�Ƃ����ӂ��Ɏg���B
	�E�C���f�b�N�X�i�J�b�R���̐����j��0����n�܂�

	<�o�͌���>
	a[0] = 1
	a[0] = 1
	a[0] = 3
*/

#include <iostream>
using namespace std;

int main()
{
	int a[2];

	a[0] = 1;
	cout << "a[0] = " << a[0] << endl;

	a[1] = 2;
	cout << "a[0] = " << a[0] << endl;

	a[0] = 3;
	cout << "a[0] = " << a[0] << endl;

	getchar();
	return 0;
}