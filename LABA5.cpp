#include <iostream>
#include "LABA5Header.h"
using namespace std;

int main()
{
	CGasStation GasStation;
	cout << GasStation << endl;
	GasStation--;
	cout << GasStation << endl;
	CGasStation GasStation2;
	if (GasStation != GasStation2)
	{
		cout << "Not equal 1 and 2\n";
	}
	if (GasStation == GasStation)
	{
		cout << "Equal 1 and 1\n\n";
	}
	CGasStation GasStation3 = GasStation + GasStation2;
	cout << GasStation3;
	system("pause");
	return 0;
}
