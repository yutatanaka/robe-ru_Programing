
/*
	���w�֐�

	�v�_
	�E�����̌^�ɂ͐��x�̈Ⴄfloat�^�Adouble�^�Along double�^��3��ނ�����B
	�E�����̉��Z��double�^�ōs���̂���{
	�E���w�֐��� cmath�@�w�b�_�t�@�C���Ő錾����Ă���B
*/

#include <iostream>
#include <cmath>		// ���w�֐����i�[����Ă���
using namespace std;

int main()
{
	double a, b;

	cout << "���p������ 2 �ӂ̒�������͂��Ă������� >" << flush;
	cin >> a >> b;

	cout << "�Εӂ̒����� " << sqrt(a * a + b * b) << " �ł��B" << endl;

	getchar();
	return 0;
}
