
/*
	while���Ado-while��

	�v�_
	�Ewhile��(������) { ���s�� }�ŏ��������^�̊Ԃ����Ǝ��s�������s�����B
	�E�������̔���̓��[�v�̏��߂ɔ��肳���B
	�Edo{ ���s�� } while(������); ���g���Ə������̓��[�v�̏I���ɔ��肳���B
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 0;

	while (a < 10)
	{
		cout << a << " ";
		a += 2;
	}
	cout << endl;

	getchar();
	return 0;
}