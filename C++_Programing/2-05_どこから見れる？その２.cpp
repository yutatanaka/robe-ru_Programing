
/*
	�ǂ����猩���H(�O���[�o���ϐ��ƃ��[�J���ϐ�)���̂Q

	<�o�͌���>
	1 <- a | b -> 1
	2 <- a | b -> 1
	3 <- a | b -> 1
*/

#include <iostream>
using namespace std;

int a = 0;

void Inc()
{
	int b = 0;
	++a;
	++b;
	cout << a << "<- a | b ->" << b << endl;
}

int main()
{
	Inc();
	Inc();
	Inc();
	getchar();
}