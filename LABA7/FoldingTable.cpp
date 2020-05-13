#include "FoldingTable.h"

CFoldingTable::CFoldingTable() : CCommode(), CTable()
{
	Comomd_Model = "No model";
	Table_Model = "No model";
	OC = false;
	folding = false;
}
CFoldingTable::CFoldingTable(string model, string model2, int h, int w, bool ch, bool ch2) : CTable(model, h, w, ch), CCommode(model2, h, w, ch2) { }

CFoldingTable::~CFoldingTable() {}

void CFoldingTable::ShowInfo()
{
	cout << "\n---Info---\n" << "Name: " << Furniture_Name << "\nTable Model: " << Table_Model << "\nCommode Model: " << Comomd_Model << "\nWidth: " << width << "\nHeight: " << height << "\nRandom: ";
	for (int i = 0; i < size; i++)
	{
		cout << dynMasuvCommod[i] << " ";
	}
	cout << endl << "Random2: ";
	for (int i = 0; i < size; i++)
	{
		cout << dynMasuvTable[i] << " ";
	}
	cout << endl;
}

