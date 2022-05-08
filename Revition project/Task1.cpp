#include "Header.h"

int calculetHowManyNuts(int squirrels, int nuts)
{
	return nuts / squirrels;
}

int main()
{
	//int n;
	//int k;

	//cout << "Input squirrels: " << endl;
	//cin >> n;

	//cout << "Input nuts: " << endl;
	//cin >> k;

	cout << (calculetHowManyNuts(3, 14) == 4 ? "Well done!" : "Something was Wrong!") << endl;

	system("pause");
	return 0;
}