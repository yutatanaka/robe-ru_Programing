
/*
	break���Acontinue��

	�v�_
	�Ebreak�����g���΃��[�v�𔲂�����
	�Econtinue�����g���Ύ��s���̏I���ɔ�ׂ�
*/

#include <iostream>
using namespace std;

int main()
{
	for (;;)
	{
		int a, b;

		cout << "1 �Ԗڂ̒l����͂��Ă������� >" << flush;
		cin >> a;

		cout << "2 �Ԗڂ̒l����͂��Ă������� >" << flush;
		cin >> b;

		if (b == 0)
		{
			cout << "0 �ł͊���܂���I" << endl;
			break;
		}

		cout << a << " / " << b << " = "
			<< a / b << " ... " << a % b << endl;
	}

	cout << "�v���O�����͏I�����܂����B" << endl;

	getchar();
	return 0;
}