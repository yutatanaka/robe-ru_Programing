
/*
	break�Acontinue�����̂Q
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int a, b;
		cout << "1 �Ԗڂ̒l����͂��Ă������� > " << flush;
		cin >> a;

		cout << "2 �Ԗڂ̒l����͂��Ă������� > " << flush;
		cin >> b;

		if (b == 0)
		{
			cout << "0 �ł͊���܂���I" << endl;
			continue;
		}
		cout << a << " / " << b << " = "
			<< a / b << " ... " << a % b << endl;
	}

	cout << "�v���O�����͏I�����܂����B" << endl;

	getchar();
	return 0;
}