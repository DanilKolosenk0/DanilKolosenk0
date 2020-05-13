#include "Commode.h"

CCommode::CCommode() :ÑFurniture()
{
	Comomd_Model = "No model";
	OC = false;
	dynMasuvCommod = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuvCommod[i] = rand() % 10 + 1;
	}
}
CCommode::CCommode(string model, int h, int w, bool ch) : ÑFurniture(h, w)
{
	Comomd_Model = model;
	OC = ch;
	dynMasuvCommod = new int[size];
	srand(time(0));
	for (int i = 0; i < size; i++)
	{
		dynMasuvCommod[i] = rand() % 10 + 1;
	}
}
void CCommode::OpenClose()
{
	if (OC == true)
	{
		cout << "\nCommode is open";
	}
	else
	{
		cout << "\nComode is close";
	}
}

CCommode::~CCommode()
{
	delete[] dynMasuvCommod;
}

void CCommode::ShowInfo()
{
	cout << "\n---Info---\n" << "Name: " << Furniture_Name << "\nModel: " << Comomd_Model << "\nWidth: " << width << "\nHeight: " << height << "\nRandom: ";
	for (int i = 0; i < size; i++)
	{
		cout << dynMasuvCommod[i] << " ";
	}
	cout << endl;
}
