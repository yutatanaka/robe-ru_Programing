
/*
	switch���i���̂Q�j
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

		switch (op)
		{
		case 1:
			result = a + b;	break;
		case 2:
			result = a - b; break;
		case 3:
			result = a * b; break;
		case 4:
			result = a / b; break;
		default:
			cout << "�^�ʖڂɂ��񂩂��I" << endl;
			continue;
		}

		cout << "������ " << result << " �ł��B" << endl;
	}

	getchar();
	return 0;
}