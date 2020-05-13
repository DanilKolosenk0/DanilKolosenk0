#pragma once
#include <iostream>
#include <time.h>
using namespace std;

class ÑFurniture
{
protected:
	string Furniture_Name;
	double width, height;
	const int size = 10;
	int* dynMasuv;
public:
	ÑFurniture();
	ÑFurniture(int w, int h);
	ÑFurniture(string name, int w, int h);
	virtual ~ÑFurniture();
	double GetWidth();
	double GetHeight();
	virtual void ShowInfo();
	ÑFurniture& operator=(const ÑFurniture&);
};

