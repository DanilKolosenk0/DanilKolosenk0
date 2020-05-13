#include <iostream>
#include "Furniture.h"

using namespace std;

int main()
{
	ÑFurniture a1("Luks", 250, 750);
	ÑFurniture a11("Luks2", 200, 150);
	CTable a2("MEH245", 25, 500, true);
	CCommode a3("MEH245", 350, 400, true);
	CFoldingTable a4("SV", "KM45", 545, 65, true, false);
	a1.ShowInfo();
	a11.ShowInfo();
	a11 = a1;
	a1.ShowInfo();
	a2.ShowInfo();
	a2.OpenClose();
	a3.ShowInfo();
	a3.OpenClose();
	a4.ShowInfo();
	ÑFurniture* a20 = new CTable("LL", 145, 220, true);
	ÑFurniture* a30 = new CCommode("ZZ", 35, 40, false);
	CFoldingTable a40("Sl", "Kl45", 855, 605, true, false);;
	ÑFurniture* a40 = new CFoldingTable("Sl", "Kl45", 855, 605, true, false);
	a20->ShowInfo();
	a20->ShowInfo();
	a30->ShowInfo();
	a40->ShowInfo();
	system("pause");
	return 0;
}
