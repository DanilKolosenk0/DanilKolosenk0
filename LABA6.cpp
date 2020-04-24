#include <iostream>
#include"LABA6Header.h"
#include"laba6Header1.h"
using namespace std;
int main()
{
	Tv tv("L43", 15);
	tv.Info();
	cout << endl << endl;
	tv.Tv_Info();
	cout << endl << endl;
	tv.Set(25);
	tv.Tv_Info();
	cout << endl;
	tv.Chek__Frequnce();
	Tv tv1("Z43", 45);
	Tv tv2 = tv;
	cout << endl;
	tv2.Tv_Info();
	cout << endl;
	system("pause");
	return 0;
}
