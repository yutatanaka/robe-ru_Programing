
/*
	if��(1)

	�v�_
	�E��������̏����� if(������) {���s���P} else{���s���Q}�B
	�Eelse���͂Ȃ��Ă��悢�B
	�E�������p�̉��Z�q������B
*/

#include <iostream>
using namespace std;

void BirthMonth()
{
	int month;

	cout << "���Ȃ��͉������܂�ł��� >" << flush;
	cin >> month;

	if (1 <= month && month <= 12)
	{
		cout << "�ց[�A" << month << " ����ƁI�H" << endl;
	}
	else
	{
		cout << month << " ����ƁI�H" << endl << "��Ȍ��A����ւ��!" << endl;
	}
}

int main()
{
	BirthMonth();
	BirthMonth();
	getchar();
	getchar();
}