
/*
	switch��

	�v�_
	�Eswitch(��){ ���� } ���g���Ƒ���������ɂȂ�
	�E����case�l�F�Ŏ����l�̎��A�����֔�ԁB
	�E����ȊO�̏ꍇ��default:�ɔ��
	�Eswitch���𔲂���ɂ�break�����g���B

	if���ōs���p�^�[��
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int a, b, op, result;

		cout << "�� 1 �� >" << flush;
		cin >> a;
		cout << "�� 2 �� >" << flush;
		cin >> b;
		cout << "1: ���Z, 2: ���Z, 3: ��Z, 4: ���Z >" << flush;
		cin >> op;

		if (op == 1)
		{
			result = a + b;
		}
		else if (op == 2)
		{
			result = a - b;
		}
		else if (op == 3)
		{
			result = a * b;
		}
		else if (op == 4)
		{
			result = a / b;
		}
		else
		{
			cout << "�^�ʖڂɂ��񂩂��I" << endl;
			continue;
		}
		cout << "������" << result << " �ł��B" << endl;
	}
	getchar();
	return 0;
}