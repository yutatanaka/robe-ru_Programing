
/*
	switchï∂ÅiÇªÇÃÇQÅj
*/

#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 5; ++i)
	{
		int a, b, op, result;

		cout << "ëÊ 1 çÄ >" << flush;
		cin >> a;
		cout << "ëÊ 2 çÄ >" << flush;
		cin >> b;
		cout << "1: â¡éZ, 2: å∏éZ, 3: èÊéZ, 4: èúéZ >" << flush;
		cin >> op;

		switch (op)
		{
		case 1:
			result = a + b;	break;
		case 2:
			result = a - b; break;
		case 3:
			result = a * b; break;
		case 4:
			result = a / b; break;
		default:
			cout << "ê^ñ ñ⁄Ç…ÇπÇÒÇ©Ç¢ÅI" << endl;
			continue;
		}

		cout << "ìöÇ¶ÇÕ " << result << " Ç≈Ç∑ÅB" << endl;
	}

	getchar();
	return 0;
}