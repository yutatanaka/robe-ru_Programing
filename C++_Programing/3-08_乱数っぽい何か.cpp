
/*
	�^������

	�v�_
	�E�^��������rand�Ŏ擾�ł���
	�E�^��������srand�ŏ������ł���B
	�E�������ɂ͎��Ԃ𗘗p����Ƃ悢�B
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int Dice()
{
	return rand() % 6 + 1;
}

int main()
{
	for (int i = 0; i < 20; ++i)
	{
		cout << Dice() + Dice() << ' ';
	}
	cout << endl;

	getchar();
	return 0;
}