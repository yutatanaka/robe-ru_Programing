
/*
	�^�ƃL���X�g

	�E1�r�b�g��0��1�ŕ\��
	�E1�o�C�g�͊�{�I�ɂP�r�b�g
	�E����A�L������ۂ̍ŏ��P�ʂ̓o�C�g
	�E�^��ϐ��ɂ͑傫��������Asizeof���Z�q�Ŏ擾�ł���B
	�E(�^)��O�ɂ���ƌ^��ύX�ł���B������L���X�g�ƌ����B
*/

#include <iostream>
using namespace std;

int main()
{
	// �Ⴆ��
	signed char a;
	
	cout << sizeof a << endl;
////////////////////////////////////////////
	cout << sizeof(int) << endl;
////////////////////////////////////////////
	int n;
	cout << sizeof n << endl;
////////////////////////////////////////////
	int num;
	signed char b = -1;
	num = (unsigned char)b;

	cout << sizeof num << endl;

	getchar();
	return 0;
}