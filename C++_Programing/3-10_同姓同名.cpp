
/*
	�I�[�o�[���[�h

	�v�_
	�E�������Ⴆ�Γ����֐�������
	�E�߂�l���Ⴄ�����ł͓������O�̊֐��͍��Ȃ��B
	�E�������O�̈Ⴄ�֐�����邱�Ƃ��I�[�o�[���[�h�Ƃ���
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
int Input(int& i, double& d)
{
	cout << "�����l����͂��Ă������� >" << flush;
	cin >> i;
	if (i == 0)
	{
		return 0;
	}

	cout << "�����l����͂��Ă������� >" << flush;
	cin >> d;
	if (d == 0)
	{
		return 0;
	}

	return 1;
}

// ��Βl�̕\��
void ShowAbs(int i, double d)
{
	cout << i << " �̐�Βl�� " << Abs(i) << " ��" << endl
		<< d << " �̐�Βl�� " << Abs(d) << " �ł��B" << endl;
}

int main()
{
	int i;
	double d;

	while (Input(i, d) != 0)
	{
		ShowAbs(i, d);
	}

	getchar();
	return 0;
}