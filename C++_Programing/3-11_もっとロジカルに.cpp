
/*
	bool�^

	�v�_
	�Ebool�^�̕ϐ��� true �� false �̂Q�l�����Ƃ�Ȃ��B
	�E�������ɂ����� true�͐^�Afalse�͋U�ɂȂ�B
*/

#include <iostream>
using namespace std;

// ��Βl�����߂�
int Abs(int a)
{
	if (a < 0)
	{
		return -a;
	}
	else
	{
		return a;
	}
}

double Abs(double a)
{
	if (a < 0)
	{
		return -a;
	}
	else
	{
		return a;
	}
}

// ����
bool Input(int& i, double& d)
{
	cout << "�����l����͂��Ă������� >" << flush;
	cin >> i;
	if (i == 0)
	{
		return false;
	}

	cout << "�����l����͂��Ă������� >" << flush;
	cin >> d;
	if (d == 0)
	{
		return false;
	}

	return true;
}

// ��Βl�̕\��
void ShowAbs(int i, double d)
{
	cout << i << " �̐�Βl�� " << Abs(i) << " �ŁA" << endl
		<< d << " �̐�Βl�� " << Abs(d) << " �ł��B" << endl;
}

int main()
{
	int i;
	double d;

	while (Input(i, d))
	{
		ShowAbs(i, d);
	}

	getchar();
	return 0;
}