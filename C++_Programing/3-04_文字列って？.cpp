
/*
	������

	�v�_
	�E������͕����R�[�h�̗���ŕ\��
	�E������̏I���ɂ�0������
	�E�������char�^�̔z��ϐ��ɓ����B
	�E������͔z��ϐ��̖��O�ň����B
*/

#include <iostream>
using namespace std;

int main()
{
	char hello[] = "Hello!";

	cout << "[ " << hello << " ]�𕶎��R�[�h�ɕς����" << endl;

	for (int i = 0; i < (int)sizeof hello; ++i)
	{
		cout << (int)(unsigned char)hello[i] << ", " ;
	}
	cout << endl << "�ɂȂ�܂��B" << endl;

	getchar();
	return 0;
}