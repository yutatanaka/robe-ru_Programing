
/*
	if��(�R)

	<�o�͌���>
	�������͂��Ă������� > 1979
	���̔N�͏��a 54 �N�ł��B
	�������͂��Ă������� > 1999
	���̔N�͏��a�ł͂���܂���B
*/

#include <iostream>
using namespace std;

// ��������a�ɕϊ����܂��B
// �ςȒl���n���ꂽ�ꍇ�� 0 ��Ԃ��܂��B

int WestrnToShouwa(int western)
{
	if (1926 <= western && western <= 1989)
	{
		// ���͂��ꂽ�����1925�������āA���a�ɕϊ�
		return western - 1925;
	}
	else
	{
		return 0;
	}
}

void Shouwa()
{
	int western;

	cout << "�������͂��Ă������� >" << flush;
	cin >> western;

	int shouwa = WestrnToShouwa(western);
	if (shouwa == 0)
	{
		cout << "���̔N�͏��a�ł͂���܂���B" << endl;
	}
	else
	{
		cout << "���̔N�͏��a" << shouwa << " �N�ł��B" << endl;
	}
}

int main()
{
	Shouwa();
	Shouwa();

	getchar();
	return 0;
}