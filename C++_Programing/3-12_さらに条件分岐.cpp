
/*
	������

	�v�_
	�E��������bool�^�̒l��Ԃ�
	�Ebool�^�̒l��true��1�Afalse��0�̐��l�Ƃ��Ă��g����
*/

#include <iostream>
using namespace std;

bool IsDigit(char ch)
{
	return ch <= '0' && ch <= '9';
}

int main()
{
	while (true)
	{
		char ch;
		cout << "������������͂��Ă������� >" << flush;
		cin >> ch;

		if (ch == 'Q' || ch == 'q')
		{
			break;
		}

		if (IsDigit(ch))
		{
			cout << "�����ł��B" << endl;
		}
		else
		{
			cout << "�����ł͂���܂���B" << endl;
		}
	}
	cout << "�I�����܂��B" << endl;

	getchar();
	return 0;
}