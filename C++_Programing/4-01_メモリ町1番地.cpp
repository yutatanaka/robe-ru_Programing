
/*
	�������ƃA�h���X

	�v�_
	�E�������͎g�p���̃f�[�^��u���Ă����Ƃ���
	�E��{�I�ɁA��������̈ʒu�̂��Ƃ��A�h���X(�������A�h���X)�Ƃ����B
	�E�A�h���X�́A���ʂ̕ϐ��̏ꍇ�͑O��&�����邱�ƂŁA�z��ϐ��Ɗ֐��̏ꍇ�͂��̖��O���������ƂŎ擾�ł���B
*/

#include <iostream>
using namespace std;

void Foo()
{
	int a;
	char b[10];
	cout << "a   : " << (size_t)&a << endl
		<< "b   : " << (size_t)b << endl
		<< "Foo : " << (size_t)Foo << endl;
}

int main()
{
	Foo();
	getchar();
	return 0;
}