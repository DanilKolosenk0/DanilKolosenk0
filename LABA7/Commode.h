#include <iostream>
#include "Furniture.h"
using namespace std;

class CCommode : public ÑFurniture
{
protected:
	string Comomd_Model;
	bool OC;
	int* dynMasuvCommod;
public:
	CCommode();
	CCommode(string Commod_Model, int h, int w, bool ch);
	void OpenClose();
	virtual ~CCommode();
	virtual void ShowInfo();

};


