
/*
	���̒l�͉������߂�i���́j

	�v�_
	�E�l�̓��͂��s���ɂ͂��̒l������ϐ����K�v�B
	�E�l�̓��͂� cin >> �ϐ�;�Ƃ���B

	<�o�͌���>
	�����l�����Ă� > 62
	���̐��� 3 �Ŋ������]��� 2 �ł��B
*/

#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "�����l�����Ă� > " << flush;			/* flush�@���s�����Ȃ� */
	cin >> a;

	cout << "���̐��� 3 �Ŋ������]��� " << a % 3 << " �ł��B" << endl;

	getchar();
	getchar();
	return 0;
}