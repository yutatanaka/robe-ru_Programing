
/*
	if文(1)

	要点
	・条件分岐の書式は if(条件式) {実行文１} else{実行文２}。
	・else文はなくてもよい。
	・条件式用の演算子がある。
*/

#include <iostream>
using namespace std;

void BirthMonth()
{
	int month;

	cout << "あなたは何月生まれですか >" << flush;
	cin >> month;

	if (1 <= month && month <= 12)
	{
		cout << "へー、" << month << " 月やと！？" << endl;
	}
	else
	{
		cout << month << " 月やと！？" << endl << "んな月、あらへんわ!" << endl;
	}
}

int main()
{
	BirthMonth();
	BirthMonth();
	getchar();
	getchar();
}