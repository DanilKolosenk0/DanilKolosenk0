#include <iostream>
#include "LABA4header.h"
using namespace std;

int main()
{
	int choose, amount, where;
	CGasStation GasStation;
	do
	{
		cout << "Information(0)\nAdd amount fo gas(1)\nRefuil(3)\nExit(4)\n";
		cin >> choose;
		switch (choose)
		{
		case 0:
			system("cls");
			GasStation.Information();
			break;
		case 1:
			system("cls");
			cout << "Enter amount of gas: ";
			cin >> amount;
			cout << "Diesel(0)\nGasoline(1)\nMethanol(2)\nPropane(3)\nWhere you want to add: ";
			cin >> where;
			GasStation.AddAmount(amount, where);
			break;
		case 3:
			system("cls");
			cout << "Enter amount of gas you want to refuil: ";
			cin >> amount;
			cout << "Diesel(0)\nGasoline(1)\nMethanol(2)\nPropane(3)\nWhere you want to add: ";
			cin >> where;
			GasStation.Refuil(amount, where);
			break;
		case 4:
			system("cls");
			return 0;
		default:
			system("cls");
			cout << "Enter corect!!!" << endl;
			continue;
		}
	} while (true);


	system("pause");
	return 0;
}