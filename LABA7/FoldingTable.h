#pragma once
#include <iostream>
#include "Commode.h"
#include "Table.h"

using namespace std;
class CFoldingTable : public CCommode, public CTable
{
public:

	CFoldingTable();
	CFoldingTable(string model, string model2, int h, int w, bool ch, bool ch2);
	virtual ~CFoldingTable();
	virtual void ShowInfo();
};
