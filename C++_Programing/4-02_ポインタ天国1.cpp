
/*
	�|�C���^(1)

	�v�_
	�E�|�C���^�̓A�h���X���i�[���邽�߂̕ϐ�
	�E����^�̃A�h���X���i�[����|�C���^�� �^*�ϐ���; �Ƃ����`�Ő錾����B
*/

#include <iostream>
using namespace std;

int main()
{
	char a;
	char* p;

	p = &a;
	cout << " p = " << (size_t)p << endl;
	cout << "&a = " << (size_t)&a << endl;

	getchar();
	return 0;
}