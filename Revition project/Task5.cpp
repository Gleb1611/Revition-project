#include "Header.h"

int calculetManyDozent(int number)
{
	return number + 2 - number % 2;
}

int main()
{
	//int n;
	//int k;

	//cout << "Input squirrels: " << endl;
	//cin >> n;

	//cout << "Input nuts: " << endl;
	//cin >> k;

	cout << (calculetManyDozent(5) == 6 ? "Well done!" : "Something was Wrong!") << endl;
	cout << (calculetManyDozent(2) == 4 ? "Well done!" : "Something was Wrong!") << endl;

	system("pause");
	return 0;
}