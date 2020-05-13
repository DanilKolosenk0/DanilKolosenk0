#pragma once
#include <iostream>
#include "Furniture.h"
using namespace std;

class CTable : public ÑFurniture
{
protected:
	string Table_Model;
	bool folding;
	int* dynMasuvTable;
public:
	CTable();
	CTable(string Table_Model, int h, int w, bool ch);
	void OpenClose();
	virtual ~CTable();
	virtual void ShowInfo();
};
