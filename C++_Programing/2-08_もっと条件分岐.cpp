
/*
	if���i�Q�j

	�v�_
	�Eif���͕ϐ��Ȃǂ�����l����������̏��������߂邽�߂Ɏg����B

	<�o�͌���>
	1�Ԗڂ̒l����͂��Ă������� > 15
	2�Ԗڂ̒l����͂��Ă������� > 4
	15 / 4 = 3 ... 3
	1�Ԗڂ̒l����͂��Ă������� > 5
	2�Ԗڂ̒l����͂��Ă������� > 0
	0�ł͊���܂���B
*/

#include <iostream>
using namespace std;

void Divide()
{
	int a, b;

	cout << "1�Ԗڂ̒l����͂��Ă������� >" << flush;
	cin >> a;

	cout << "2�Ԗڂ̒l����͂��Ă������� >" << flush;
	cin >> b;

	if (b == 0)
	{
		cout << "0�ł͊���܂���B" << endl;
	}
	else
	{
		cout << a << " / " << b << " = "
			<< a / b << "..." << a % b << endl;
	}
}

int main()
{
	Divide();
	Divide();

	getchar();
	getchar();
}