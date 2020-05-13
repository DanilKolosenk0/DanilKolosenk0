#include "Table.h"

CTable::CTable() :ÑFurniture()
{
	Table_Model = "No model";
	folding = false;
	dynMasuvTable = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuvTable[i] = rand() % 10 + 1;
	}
}
CTable::CTable(string model, int h, int w, bool ch) : ÑFurniture(h, w)
{
	Table_Model = model;
	folding = ch;
	dynMasuvTable = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuvTable[i] = rand() % 10 + 1;
	}
}
void CTable::OpenClose()
{
	if (folding == true)
	{
		cout << "\nTable is folding";
	}
	else
	{
		cout << "\nTable is`nt folding";
	}
}

CTable::~CTable()
{
	delete[] dynMasuvTable;
}

void CTable::ShowInfo()
{
	cout << "\n---Info---\n" << "Name: " << Furniture_Name << "\nModel: " << Table_Model << "\nWidth: " << width << "\nHeight: " << height << "\nRandom: ";
	for (int i = 0; i < size; i++)
	{
		cout << dynMasuvTable[i] << " ";
	}
	cout << endl;
}
